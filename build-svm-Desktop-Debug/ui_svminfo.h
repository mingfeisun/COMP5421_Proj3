/********************************************************************************
** Form generated from reading UI file 'svminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVMINFO_H
#define UI_SVMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_svmInfo
{
public:
    QGroupBox *groupBox;
    QLabel *x1_label;
    QLabel *vp_label;
    QLabel *x3_label;
    QRadioButton *x4_check;
    QLabel *x2_label;
    QLabel *x4_label;
    QRadioButton *x1_check;
    QRadioButton *x2_check;
    QRadioButton *x3_check;
    QLabel *vpx;
    QComboBox *vp;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *origin_y;
    QLineEdit *origin_x;
    QGroupBox *groupBox_3;
    QComboBox *ref_dir;
    QPushButton *compute;
    QLabel *v1_label;
    QRadioButton *v1_check;
    QLabel *v2_label;
    QRadioButton *v2_check;
    QLabel *v3_label;
    QRadioButton *v3_check;
    QLabel *v4_label;
    QRadioButton *v4_check;
    QLabel *v1_label_3d;
    QLabel *v2_label_3d;
    QLabel *v3_label_3d;
    QLabel *v4_label_3d;
    QLabel *label_7;
    QGroupBox *groupBox_4;
    QLineEdit *x1_3d_x;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *x1_3d_y;
    QLabel *label_10;
    QLineEdit *x1_3d_z;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *x2_3d_z;
    QLabel *label_14;
    QLineEdit *x2_3d_y;
    QLineEdit *x2_3d_x;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *y1_3d_z;
    QLabel *label_18;
    QLineEdit *y1_3d_y;
    QLineEdit *y1_3d_x;
    QLabel *label_19;
    QLineEdit *y2_3d_z;
    QLabel *label_20;
    QLineEdit *y2_3d_y;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *y2_3d_x;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *z1_3d_y;
    QLabel *label_25;
    QLineEdit *z1_3d_x;
    QLabel *label_26;
    QLineEdit *z1_3d_z;
    QLabel *label_27;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_28;
    QLabel *label_29;
    QGroupBox *groupBox_5;
    QCheckBox *test_check;
    QLabel *test_point_3d;
    QLabel *test_point;

    void setupUi(QWidget *svmInfo)
    {
        if (svmInfo->objectName().isEmpty())
            svmInfo->setObjectName(QStringLiteral("svmInfo"));
        svmInfo->resize(570, 411);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(svmInfo->sizePolicy().hasHeightForWidth());
        svmInfo->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(svmInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 201, 221));
        groupBox->setAutoFillBackground(true);
        groupBox->setFlat(true);
        x1_label = new QLabel(groupBox);
        x1_label->setObjectName(QStringLiteral("x1_label"));
        x1_label->setGeometry(QRect(70, 70, 80, 22));
        vp_label = new QLabel(groupBox);
        vp_label->setObjectName(QStringLiteral("vp_label"));
        vp_label->setGeometry(QRect(40, 190, 150, 21));
        x3_label = new QLabel(groupBox);
        x3_label->setObjectName(QStringLiteral("x3_label"));
        x3_label->setGeometry(QRect(70, 130, 80, 22));
        x4_check = new QRadioButton(groupBox);
        x4_check->setObjectName(QStringLiteral("x4_check"));
        x4_check->setGeometry(QRect(10, 160, 48, 22));
        x2_label = new QLabel(groupBox);
        x2_label->setObjectName(QStringLiteral("x2_label"));
        x2_label->setGeometry(QRect(70, 100, 80, 22));
        x4_label = new QLabel(groupBox);
        x4_label->setObjectName(QStringLiteral("x4_label"));
        x4_label->setGeometry(QRect(70, 160, 80, 22));
        x1_check = new QRadioButton(groupBox);
        x1_check->setObjectName(QStringLiteral("x1_check"));
        x1_check->setGeometry(QRect(10, 70, 48, 22));
        x1_check->setChecked(true);
        x2_check = new QRadioButton(groupBox);
        x2_check->setObjectName(QStringLiteral("x2_check"));
        x2_check->setGeometry(QRect(10, 100, 48, 22));
        x2_check->setMouseTracking(true);
        x3_check = new QRadioButton(groupBox);
        x3_check->setObjectName(QStringLiteral("x3_check"));
        x3_check->setGeometry(QRect(10, 130, 48, 22));
        vpx = new QLabel(groupBox);
        vpx->setObjectName(QStringLiteral("vpx"));
        vpx->setGeometry(QRect(10, 190, 35, 22));
        vp = new QComboBox(groupBox);
        vp->setObjectName(QStringLiteral("vp"));
        vp->setGeometry(QRect(0, 30, 161, 27));
        groupBox_2 = new QGroupBox(svmInfo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 270, 171, 61));
        groupBox_2->setAutoFillBackground(true);
        groupBox_2->setFlat(true);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(46, 30, 16, 17));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(93, 30, 16, 17));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 30, 16, 17));
        origin_y = new QLineEdit(groupBox_2);
        origin_y->setObjectName(QStringLiteral("origin_y"));
        origin_y->setGeometry(QRect(98, 25, 40, 25));
        origin_y->setAutoFillBackground(false);
        origin_y->setInputMethodHints(Qt::ImhDigitsOnly);
        origin_y->setMaxLength(4);
        origin_y->setReadOnly(true);
        origin_x = new QLineEdit(groupBox_2);
        origin_x->setObjectName(QStringLiteral("origin_x"));
        origin_x->setGeometry(QRect(53, 25, 40, 25));
        origin_x->setInputMethodHints(Qt::ImhDigitsOnly);
        origin_x->setMaxLength(4);
        origin_x->setReadOnly(true);
        groupBox_3 = new QGroupBox(svmInfo);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(220, 220, 320, 171));
        groupBox_3->setAutoFillBackground(true);
        ref_dir = new QComboBox(groupBox_3);
        ref_dir->setObjectName(QStringLiteral("ref_dir"));
        ref_dir->setGeometry(QRect(110, 20, 40, 25));
        compute = new QPushButton(groupBox_3);
        compute->setObjectName(QStringLiteral("compute"));
        compute->setGeometry(QRect(170, 20, 111, 27));
        v1_label = new QLabel(groupBox_3);
        v1_label->setObjectName(QStringLiteral("v1_label"));
        v1_label->setGeometry(QRect(80, 50, 80, 22));
        v1_check = new QRadioButton(groupBox_3);
        v1_check->setObjectName(QStringLiteral("v1_check"));
        v1_check->setGeometry(QRect(20, 50, 48, 22));
        v1_check->setChecked(false);
        v2_label = new QLabel(groupBox_3);
        v2_label->setObjectName(QStringLiteral("v2_label"));
        v2_label->setGeometry(QRect(80, 80, 80, 22));
        v2_check = new QRadioButton(groupBox_3);
        v2_check->setObjectName(QStringLiteral("v2_check"));
        v2_check->setGeometry(QRect(20, 80, 48, 22));
        v2_check->setChecked(false);
        v3_label = new QLabel(groupBox_3);
        v3_label->setObjectName(QStringLiteral("v3_label"));
        v3_label->setGeometry(QRect(80, 110, 80, 22));
        v3_check = new QRadioButton(groupBox_3);
        v3_check->setObjectName(QStringLiteral("v3_check"));
        v3_check->setGeometry(QRect(20, 110, 48, 22));
        v3_check->setChecked(false);
        v4_label = new QLabel(groupBox_3);
        v4_label->setObjectName(QStringLiteral("v4_label"));
        v4_label->setGeometry(QRect(80, 140, 80, 22));
        v4_check = new QRadioButton(groupBox_3);
        v4_check->setObjectName(QStringLiteral("v4_check"));
        v4_check->setGeometry(QRect(20, 140, 48, 22));
        v4_check->setCheckable(true);
        v4_check->setChecked(false);
        v1_label_3d = new QLabel(groupBox_3);
        v1_label_3d->setObjectName(QStringLiteral("v1_label_3d"));
        v1_label_3d->setGeometry(QRect(170, 50, 130, 22));
        v2_label_3d = new QLabel(groupBox_3);
        v2_label_3d->setObjectName(QStringLiteral("v2_label_3d"));
        v2_label_3d->setGeometry(QRect(170, 80, 130, 22));
        v3_label_3d = new QLabel(groupBox_3);
        v3_label_3d->setObjectName(QStringLiteral("v3_label_3d"));
        v3_label_3d->setGeometry(QRect(170, 110, 130, 22));
        v4_label_3d = new QLabel(groupBox_3);
        v4_label_3d->setObjectName(QStringLiteral("v4_label_3d"));
        v4_label_3d->setGeometry(QRect(170, 140, 130, 22));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 91, 25));
        groupBox_4 = new QGroupBox(svmInfo);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(220, 9, 320, 151));
        x1_3d_x = new QLineEdit(groupBox_4);
        x1_3d_x->setObjectName(QStringLiteral("x1_3d_x"));
        x1_3d_x->setGeometry(QRect(70, 20, 40, 25));
        x1_3d_x->setInputMethodHints(Qt::ImhDigitsOnly);
        x1_3d_x->setMaxLength(4);
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 27, 16, 17));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(63, 25, 16, 17));
        x1_3d_y = new QLineEdit(groupBox_4);
        x1_3d_y->setObjectName(QStringLiteral("x1_3d_y"));
        x1_3d_y->setGeometry(QRect(120, 20, 40, 25));
        x1_3d_y->setAutoFillBackground(false);
        x1_3d_y->setInputMethodHints(Qt::ImhDigitsOnly);
        x1_3d_y->setMaxLength(4);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 25, 16, 17));
        x1_3d_z = new QLineEdit(groupBox_4);
        x1_3d_z->setObjectName(QStringLiteral("x1_3d_z"));
        x1_3d_z->setGeometry(QRect(170, 20, 40, 25));
        x1_3d_z->setAutoFillBackground(false);
        x1_3d_z->setInputMethodHints(Qt::ImhDigitsOnly);
        x1_3d_z->setMaxLength(4);
        x1_3d_z->setReadOnly(true);
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 27, 16, 17));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 52, 16, 17));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(160, 52, 16, 17));
        x2_3d_z = new QLineEdit(groupBox_4);
        x2_3d_z->setObjectName(QStringLiteral("x2_3d_z"));
        x2_3d_z->setGeometry(QRect(170, 45, 40, 25));
        x2_3d_z->setAutoFillBackground(false);
        x2_3d_z->setInputMethodHints(Qt::ImhDigitsOnly);
        x2_3d_z->setMaxLength(4);
        x2_3d_z->setReadOnly(true);
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(63, 50, 16, 17));
        x2_3d_y = new QLineEdit(groupBox_4);
        x2_3d_y->setObjectName(QStringLiteral("x2_3d_y"));
        x2_3d_y->setGeometry(QRect(120, 45, 40, 25));
        x2_3d_y->setAutoFillBackground(false);
        x2_3d_y->setInputMethodHints(Qt::ImhDigitsOnly);
        x2_3d_y->setMaxLength(4);
        x2_3d_x = new QLineEdit(groupBox_4);
        x2_3d_x->setObjectName(QStringLiteral("x2_3d_x"));
        x2_3d_x->setGeometry(QRect(70, 45, 40, 25));
        x2_3d_x->setInputMethodHints(Qt::ImhDigitsOnly);
        x2_3d_x->setMaxLength(4);
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(210, 50, 16, 17));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(110, 70, 16, 17));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(160, 70, 16, 17));
        y1_3d_z = new QLineEdit(groupBox_4);
        y1_3d_z->setObjectName(QStringLiteral("y1_3d_z"));
        y1_3d_z->setGeometry(QRect(170, 70, 40, 25));
        y1_3d_z->setAutoFillBackground(false);
        y1_3d_z->setInputMethodHints(Qt::ImhDigitsOnly);
        y1_3d_z->setMaxLength(4);
        y1_3d_z->setReadOnly(true);
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(63, 75, 16, 17));
        y1_3d_y = new QLineEdit(groupBox_4);
        y1_3d_y->setObjectName(QStringLiteral("y1_3d_y"));
        y1_3d_y->setGeometry(QRect(120, 70, 40, 25));
        y1_3d_y->setAutoFillBackground(false);
        y1_3d_y->setInputMethodHints(Qt::ImhDigitsOnly);
        y1_3d_y->setMaxLength(4);
        y1_3d_x = new QLineEdit(groupBox_4);
        y1_3d_x->setObjectName(QStringLiteral("y1_3d_x"));
        y1_3d_x->setGeometry(QRect(70, 70, 40, 25));
        y1_3d_x->setInputMethodHints(Qt::ImhDigitsOnly);
        y1_3d_x->setMaxLength(4);
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(210, 75, 16, 17));
        y2_3d_z = new QLineEdit(groupBox_4);
        y2_3d_z->setObjectName(QStringLiteral("y2_3d_z"));
        y2_3d_z->setGeometry(QRect(170, 95, 40, 25));
        y2_3d_z->setAutoFillBackground(false);
        y2_3d_z->setInputMethodHints(Qt::ImhDigitsOnly);
        y2_3d_z->setMaxLength(4);
        y2_3d_z->setReadOnly(true);
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(160, 95, 16, 17));
        y2_3d_y = new QLineEdit(groupBox_4);
        y2_3d_y->setObjectName(QStringLiteral("y2_3d_y"));
        y2_3d_y->setGeometry(QRect(120, 95, 40, 25));
        y2_3d_y->setAutoFillBackground(false);
        y2_3d_y->setInputMethodHints(Qt::ImhDigitsOnly);
        y2_3d_y->setMaxLength(4);
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(110, 95, 16, 17));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(210, 100, 16, 17));
        y2_3d_x = new QLineEdit(groupBox_4);
        y2_3d_x->setObjectName(QStringLiteral("y2_3d_x"));
        y2_3d_x->setGeometry(QRect(70, 95, 40, 25));
        y2_3d_x->setInputMethodHints(Qt::ImhDigitsOnly);
        y2_3d_x->setMaxLength(4);
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(63, 100, 16, 17));
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(63, 125, 16, 17));
        z1_3d_y = new QLineEdit(groupBox_4);
        z1_3d_y->setObjectName(QStringLiteral("z1_3d_y"));
        z1_3d_y->setGeometry(QRect(120, 120, 40, 25));
        z1_3d_y->setAutoFillBackground(false);
        z1_3d_y->setInputMethodHints(Qt::ImhDigitsOnly);
        z1_3d_y->setMaxLength(4);
        z1_3d_y->setReadOnly(true);
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(110, 120, 16, 17));
        z1_3d_x = new QLineEdit(groupBox_4);
        z1_3d_x->setObjectName(QStringLiteral("z1_3d_x"));
        z1_3d_x->setGeometry(QRect(70, 120, 40, 25));
        z1_3d_x->setInputMethodHints(Qt::ImhDigitsOnly);
        z1_3d_x->setMaxLength(4);
        z1_3d_x->setReadOnly(true);
        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(210, 125, 16, 17));
        z1_3d_z = new QLineEdit(groupBox_4);
        z1_3d_z->setObjectName(QStringLiteral("z1_3d_z"));
        z1_3d_z->setGeometry(QRect(170, 120, 40, 25));
        z1_3d_z->setAutoFillBackground(false);
        z1_3d_z->setInputMethodHints(Qt::ImhDigitsOnly);
        z1_3d_z->setMaxLength(4);
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(160, 120, 16, 17));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 22, 21, 20));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 47, 21, 20));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 72, 21, 20));
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(40, 97, 21, 20));
        label_29 = new QLabel(groupBox_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(40, 122, 21, 20));
        groupBox_5 = new QGroupBox(svmInfo);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(220, 160, 320, 51));
        test_check = new QCheckBox(groupBox_5);
        test_check->setObjectName(QStringLiteral("test_check"));
        test_check->setGeometry(QRect(20, 20, 61, 22));
        test_point_3d = new QLabel(groupBox_5);
        test_point_3d->setObjectName(QStringLiteral("test_point_3d"));
        test_point_3d->setGeometry(QRect(140, 20, 161, 22));
        test_point = new QLabel(groupBox_5);
        test_point->setObjectName(QStringLiteral("test_point"));
        test_point->setGeometry(QRect(80, 20, 61, 22));

        retranslateUi(svmInfo);

        QMetaObject::connectSlotsByName(svmInfo);
    } // setupUi

    void retranslateUi(QWidget *svmInfo)
    {
        svmInfo->setWindowTitle(QApplication::translate("svmInfo", "Form", 0));
        groupBox->setTitle(QApplication::translate("svmInfo", "VanshingPoints", 0));
        x1_label->setText(QString());
        vp_label->setText(QString());
        x3_label->setText(QString());
        x4_check->setText(QApplication::translate("svmInfo", "X4", 0));
        x2_label->setText(QString());
        x4_label->setText(QString());
        x1_check->setText(QApplication::translate("svmInfo", "X1", 0));
        x2_check->setText(QApplication::translate("svmInfo", "X2", 0));
        x3_check->setText(QApplication::translate("svmInfo", "X3", 0));
        vpx->setText(QApplication::translate("svmInfo", "VPX", 0));
        vp->clear();
        vp->insertItems(0, QStringList()
         << QApplication::translate("svmInfo", "VanishingPointX", 0)
         << QApplication::translate("svmInfo", "VanishingPointY", 0)
         << QApplication::translate("svmInfo", "VanishingPointZ", 0)
        );
        groupBox_2->setTitle(QApplication::translate("svmInfo", "Origin Coordinate", 0));
        label_4->setText(QApplication::translate("svmInfo", "(", 0));
        label_6->setText(QApplication::translate("svmInfo", ",", 0));
        label_5->setText(QApplication::translate("svmInfo", ")", 0));
        origin_y->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        origin_x->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        groupBox_3->setTitle(QApplication::translate("svmInfo", "Texture", 0));
        ref_dir->clear();
        ref_dir->insertItems(0, QStringList()
         << QApplication::translate("svmInfo", "X", 0)
         << QApplication::translate("svmInfo", "Y", 0)
         << QApplication::translate("svmInfo", "Z", 0)
        );
        compute->setText(QApplication::translate("svmInfo", "Compute Map", 0));
        v1_label->setText(QString());
        v1_check->setText(QApplication::translate("svmInfo", "V1", 0));
        v2_label->setText(QString());
        v2_check->setText(QApplication::translate("svmInfo", "V2", 0));
        v3_label->setText(QString());
        v3_check->setText(QApplication::translate("svmInfo", "V3", 0));
        v4_label->setText(QString());
        v4_check->setText(QApplication::translate("svmInfo", "V4", 0));
        v1_label_3d->setText(QString());
        v2_label_3d->setText(QString());
        v3_label_3d->setText(QString());
        v4_label_3d->setText(QString());
        label_7->setText(QApplication::translate("svmInfo", "Ref Direction", 0));
        groupBox_4->setTitle(QApplication::translate("svmInfo", "3D Coordinates of Ref Points", 0));
        x1_3d_x->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_8->setText(QApplication::translate("svmInfo", ",", 0));
        label_9->setText(QApplication::translate("svmInfo", "(", 0));
        x1_3d_y->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_10->setText(QApplication::translate("svmInfo", ")", 0));
        x1_3d_z->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_11->setText(QApplication::translate("svmInfo", ",", 0));
        label_12->setText(QApplication::translate("svmInfo", ",", 0));
        label_13->setText(QApplication::translate("svmInfo", ",", 0));
        x2_3d_z->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_14->setText(QApplication::translate("svmInfo", "(", 0));
        x2_3d_y->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        x2_3d_x->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_15->setText(QApplication::translate("svmInfo", ")", 0));
        label_16->setText(QApplication::translate("svmInfo", ",", 0));
        label_17->setText(QApplication::translate("svmInfo", ",", 0));
        y1_3d_z->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_18->setText(QApplication::translate("svmInfo", "(", 0));
        y1_3d_y->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        y1_3d_x->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_19->setText(QApplication::translate("svmInfo", ")", 0));
        y2_3d_z->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_20->setText(QApplication::translate("svmInfo", ",", 0));
        y2_3d_y->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_21->setText(QApplication::translate("svmInfo", ",", 0));
        label_22->setText(QApplication::translate("svmInfo", ")", 0));
        y2_3d_x->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_23->setText(QApplication::translate("svmInfo", "(", 0));
        label_24->setText(QApplication::translate("svmInfo", "(", 0));
        z1_3d_y->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_25->setText(QApplication::translate("svmInfo", ",", 0));
        z1_3d_x->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_26->setText(QApplication::translate("svmInfo", ")", 0));
        z1_3d_z->setPlaceholderText(QApplication::translate("svmInfo", "0", 0));
        label_27->setText(QApplication::translate("svmInfo", ",", 0));
        label->setText(QApplication::translate("svmInfo", "X1", 0));
        label_2->setText(QApplication::translate("svmInfo", "X2", 0));
        label_3->setText(QApplication::translate("svmInfo", "Y1", 0));
        label_28->setText(QApplication::translate("svmInfo", "Y2", 0));
        label_29->setText(QApplication::translate("svmInfo", "Z1", 0));
        groupBox_5->setTitle(QApplication::translate("svmInfo", "3D Test", 0));
        test_check->setText(QApplication::translate("svmInfo", "Test", 0));
        test_point_3d->setText(QString());
        test_point->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class svmInfo: public Ui_svmInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVMINFO_H
