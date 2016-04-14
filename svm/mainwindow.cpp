#include <QtWidgets>
#include <QPixmap>

#include "mainwindow.h"

MainWindow::MainWindow()
{
    picLabel = new QLabel(this);
    picLabel->setAlignment(Qt::AlignBaseline);
    img = new QPixmap();
    setCentralWidget(picLabel);

    createActions();
    createMenus();
    createToolBars();
    createStatusBar();

    readSettings();

    setCurrentFile("");
    setUnifiedTitleAndToolBarOnMac(true);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (maybeSave()) {
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
}

void MainWindow::open()
{
    if (maybeSave()) {
        QString fileName = QFileDialog::getOpenFileName(this, "", "", "images"
                                                        "(*.png, *.jpg *.bmp)");
        if (!fileName.isEmpty())
            loadFile(fileName);
    }
}

bool MainWindow::save()
{
    return saveAs();
}

bool MainWindow::saveAs()
{
    QFileDialog dialog(this);
    dialog.setWindowModality(Qt::WindowModal);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    dialog.setDefaultSuffix("png");
    dialog.setNameFilter("png");
    QStringList files;
    if (dialog.exec())
        files = dialog.selectedFiles();
    else
        return false;

    return saveFile(files.at(0));
}

void MainWindow::about()
{
   QMessageBox::about(this, tr("About COMP 5421 Proj"),
            tr("In this project, you can create a tool that allows a user"
               "to cut an object out of one image and paste it into another."
               "The tool helps the user trace the object by providing a <em>live wire</em> "
               "that automatically snaps to and wraps around the object of interest."
               "You will then use your tool to create a composite image."));
}

void MainWindow::createActions()
{
    openAct = new QAction(QIcon(":/img/open.png"), tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);
    openAct->setStatusTip(tr("Open an existing image"));
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

    saveAct = new QAction(QIcon(":/img/save.png"), tr("&Save"), this);
    saveAct->setShortcuts(QKeySequence::Save);
    saveAct->setStatusTip(tr("Save the image to disk"));
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));

    exitAct = new QAction(tr("E&xit"), this);
    exitAct->setShortcuts(QKeySequence::Quit);
    exitAct->setStatusTip(tr("Exit the COMP 5421 Proj"));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

    aboutAct = new QAction(tr("&About"), this);
    aboutAct->setStatusTip(tr("Show the application's About box"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAct = new QAction(tr("About &Qt"), this);
    aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(openAct);
    fileMenu->addSeparator();
    fileMenu->addSeparator();
    fileMenu->addAction(saveAct);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAct);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addSeparator();

    menuBar()->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);
}

void MainWindow::createToolBars()
{
    setIconSize(QSize(32,32));
    fileToolBar = addToolBar(tr("File"));
    fileToolBar->addAction(openAct);
    fileToolBar->addAction(saveAct);
    fileToolBar->addSeparator();
}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("Welcome to COMP 5421"));
}

void MainWindow::readSettings()
{
    QSettings settings("Mingfei SUN", "COMP 5421 Project");
    QPoint pos = settings.value("pos", QPoint(200, 200)).toPoint();
    QSize size = settings.value("size", QSize(400, 400)).toSize();
    resize(size);
    move(pos);
}

void MainWindow::writeSettings()
{
    QSettings settings("QtProject", "Application Example");
    settings.setValue("pos", pos());
    settings.setValue("size", size());
}

bool MainWindow::maybeSave()
{
    if (isWindowModified()) {
        QMessageBox::StandardButton ret;
        ret = QMessageBox::warning(this, tr("Save Image?"),
                     tr("The image has been modified.\n"
                        "Do you want to save your changes?"),
                     QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        if (ret == QMessageBox::Save)
            return save();
        else if (ret == QMessageBox::Cancel)
            return false;
    }
    return true;
}

void MainWindow::loadFile(const QString &fileName)
{
    if (!img->load(fileName)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot open image %1.")
                             .arg(fileName));
        return;
    }
    picLabel->setPixmap(*img);
    setCurrentFile(fileName);
    //picLabel->setPixmap(img_pro->toPixmap());
    statusBar()->showMessage(tr("Image %1 loaded")
                             .arg(fileName), 4000);
}

bool MainWindow::saveFile(const QString &fileName)
{
    QPixmap new_save;
    if(!new_save.save(fileName, "PNG")) {
        QMessageBox::warning(this, tr("Save Image"),
                             tr("Cannot save image %1.")
                             .arg(fileName));
        return false;
    }

    setCurrentFile(fileName);
    statusBar()->showMessage(tr("Image saved as %1").arg(fileName), 4000);
    return true;
}

void MainWindow::setCurrentFile(const QString &fileName)
{
    curFile = fileName;
    setWindowModified(false);

    QString shownName = curFile;
    if (curFile.isEmpty())
        shownName = "COMP 5421";
    setWindowFilePath(shownName);
}

QString MainWindow::strippedName(const QString &fullFileName)
{
    return QFileInfo(fullFileName).fileName();
}

#include "ui_mainwindow.h"
