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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *distance;
    QLabel *label_2;
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

    void setupUi(QWidget *svmInfo)
    {
        if (svmInfo->objectName().isEmpty())
            svmInfo->setObjectName(QStringLiteral("svmInfo"));
        svmInfo->resize(572, 330);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(svmInfo->sizePolicy().hasHeightForWidth());
        svmInfo->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(svmInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 201, 301));
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
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 220, 150, 22));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 241, 145, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        distance = new QDoubleSpinBox(widget);
        distance->setObjectName(QStringLiteral("distance"));
        distance->setDecimals(1);
        distance->setMinimum(1);
        distance->setSingleStep(0.5);

        horizontalLayout->addWidget(distance);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        groupBox_2 = new QGroupBox(svmInfo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(240, 20, 171, 61));
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
        origin_x = new QLineEdit(groupBox_2);
        origin_x->setObjectName(QStringLiteral("origin_x"));
        origin_x->setGeometry(QRect(53, 25, 40, 25));
        origin_x->setInputMethodHints(Qt::ImhDigitsOnly);
        origin_x->setMaxLength(4);
        groupBox_3 = new QGroupBox(svmInfo);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(240, 110, 321, 181));
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
        label_7 = new QLabel(svmInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 130, 91, 25));

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
        label->setText(QApplication::translate("svmInfo", "Ref point distance:", 0));
        label_3->setText(QApplication::translate("svmInfo", "X1--X2:", 0));
        label_2->setText(QApplication::translate("svmInfo", "m", 0));
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
    } // retranslateUi

};

namespace Ui {
    class svmInfo: public Ui_svmInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVMINFO_H
