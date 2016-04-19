#include "svminfo.h"
#include "ui_svminfo.h"

svmInfo::svmInfo(QWidget *parent, singviewmodel& svm) :
    QWidget(parent),
    ui(new Ui::svmInfo)
{
    this->svm = &svm;
    ui->setupUi(this);

    tab=ui->vp->currentIndex();
    check=0;
    updateLabel();

    connect(ui->vp, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
    connect(ui->x1_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));
    connect(ui->x2_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));
    connect(ui->x3_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));
    connect(ui->x4_check, SIGNAL(toggled(bool)), this, SLOT(checkChanged()));

    connect(ui->x1_3d_x, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->x1_3d_y, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->x2_3d_x, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->x2_3d_y, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->y1_3d_x, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->y1_3d_y, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->y2_3d_x, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->y2_3d_y, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));
    connect(ui->z1_3d_z, SIGNAL(textChanged(QString)), this, SLOT(ref3DChanged()));

    connect(ui->test_check, SIGNAL(stateChanged(int)), this, SLOT(testChecked(int)));
}

svmInfo::~svmInfo()
{
    delete ui;
}

void svmInfo::comboChanged(int index)
{
    ui->vpx->setText(vp_disp[index]);
    ui->x1_check->setText(tr("%1").arg(x1_label_disp[index]));
    ui->x2_check->setText(tr("%1").arg(x2_label_disp[index]));
    ui->x3_check->setText(tr("%1").arg(x3_label_disp[index]));
    ui->x4_check->setText(tr("%1").arg(x4_label_disp[index]));
    svm->row = index;
    tab=index;
    updateLabel();
    emit svmChanged();
}

void svmInfo::checkChanged()
{
    int temp;
    if(ui->x1_check->isChecked()){
        temp=0;
    }
    if(ui->x2_check->isChecked()){
        temp=1;
    }
    if(ui->x3_check->isChecked()){
        temp=2;
    }
    if(ui->x4_check->isChecked()){
        temp=3;
    }
    svm->col=temp;
    check=temp;
    emit svmChanged();
}

void svmInfo::ref3DChanged()
{
    svm->ref_points[0].x = ui->x1_3d_x->text().toDouble();
    svm->ref_points[0].y = ui->x1_3d_y->text().toDouble();
    svm->ref_points[1].x = ui->x2_3d_x->text().toDouble();
    svm->ref_points[1].y = ui->x2_3d_y->text().toDouble();
    svm->ref_points[2].x = ui->y1_3d_x->text().toDouble();
    svm->ref_points[2].y = ui->y1_3d_y->text().toDouble();
    svm->ref_points[3].x = ui->y2_3d_x->text().toDouble();
    svm->ref_points[3].y = ui->y2_3d_y->text().toDouble();
    svm->calcHomoH();

    svm->ref_height = ui->z1_3d_z->text().toDouble();
    updateLabel();
}

void svmInfo::testChecked(int val)
{
    emit test3D(val);
}

void svmInfo::updateLabel()
{
    svm->genVP(svm->row);
    svm->genOrigin();

    ui->x1_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][0].x).arg(svm->points[tab][0].y));
    ui->x2_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][1].x).arg(svm->points[tab][1].y));
    ui->x3_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][2].x).arg(svm->points[tab][2].y));
    ui->x4_label->setText(tr("(%1, %2)")
                          .arg(svm->points[tab][3].x).arg(svm->points[tab][3].y));
    ui->vp_label->setText(tr("(%1, %2, %3)")
                          .arg(svm->vp[tab].x, 0, 'g', 4)
                          .arg(svm->vp[tab].y, 0, 'g', 4)
                          .arg(svm->vp[tab].w, 0, 'g', 4));
    ui->origin_x->setText(tr("%1").arg(svm->origin.x));
    ui->origin_y->setText(tr("%1").arg(svm->origin.y));

    ui->x1_3d_x->setText(tr("%1").arg(svm->ref_points[0].x));
    ui->x1_3d_y->setText(tr("%1").arg(svm->ref_points[0].y));
    ui->x2_3d_x->setText(tr("%1").arg(svm->ref_points[1].x));
    ui->x2_3d_y->setText(tr("%1").arg(svm->ref_points[1].y));
    ui->y1_3d_x->setText(tr("%1").arg(svm->ref_points[2].x));
    ui->y1_3d_y->setText(tr("%1").arg(svm->ref_points[2].y));
    ui->y2_3d_x->setText(tr("%1").arg(svm->ref_points[3].x));
    ui->y2_3d_y->setText(tr("%1").arg(svm->ref_points[3].y));
    ui->z1_3d_z->setText(tr("%1").arg(svm->ref_height));
}

void svmInfo::setTestPoint(int x, int y)
{
    if(x>=svm->img_width || y>=svm->img_height){
        return;
    }
    ui->test_point->setText(tr("(%1,%2)").arg(x).arg(y));
    svm->comp3DPos(x, y);
    ui->test_point_3d->setText(tr("(%1,%2,%3)").arg(svm->X_3d).arg(svm->Y_3d).arg(svm->Z_3d));
}
