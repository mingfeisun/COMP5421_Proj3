#include "svminfo.h"
#include "ui_svminfo.h"

svmInfo::svmInfo(QWidget *parent, singviewmodel* svm) :
    QWidget(parent),
    ui(new Ui::svmInfo)
{
    this->svm = svm;
    ui->setupUi(this);

    tab=ui->vp->currentIndex();
    check=0;

    connect(ui->vp, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
    connect(ui->x1_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));
    connect(ui->x2_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));
    connect(ui->x3_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));
    connect(ui->x4_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));

    updateLabel();
}

svmInfo::~svmInfo()
{
    delete ui;
}

void svmInfo::comboChanged(int index)
{
    tab = index;
    ui->vpx->setText(vp_disp[tab]);
    updateLabel();
    emit pointChanged(tab, check);
}

void svmInfo::checkChanged()
{
    if(ui->x1_check->isChecked()){
        check=0;
    }
    if(ui->x2_check->isChecked()){
        check=1;
    }
    if(ui->x3_check->isChecked()){
        check=2;
    }
    if(ui->x4_check->isChecked()){
        check=3;
    }
    emit pointChanged(tab, check);
}

void svmInfo::updateLabel()
{
    ui->x1_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][0].x).arg(svm->points[tab][0].y));
    ui->x2_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][1].x).arg(svm->points[tab][1].y));
    ui->x3_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][2].x).arg(svm->points[tab][2].y));
    ui->x4_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][3].x).arg(svm->points[tab][3].y));
    ui->vp_label->setText(tr("(%1, %2, %3)")
                          .arg(svm->vp[tab]->x, 0, 'g', 4)
                          .arg(svm->vp[tab]->y, 0, 'g', 4)
                          .arg(svm->vp[tab]->w, 0, 'g', 4));
}
