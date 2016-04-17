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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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

    void setupUi(QWidget *svmInfo)
    {
        if (svmInfo->objectName().isEmpty())
            svmInfo->setObjectName(QStringLiteral("svmInfo"));
        svmInfo->resize(300, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(svmInfo->sizePolicy().hasHeightForWidth());
        svmInfo->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(svmInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 201, 251));
        groupBox->setFlat(true);
        x1_label = new QLabel(groupBox);
        x1_label->setObjectName(QStringLiteral("x1_label"));
        x1_label->setGeometry(QRect(70, 70, 80, 22));
        vp_label = new QLabel(groupBox);
        vp_label->setObjectName(QStringLiteral("vp_label"));
        vp_label->setGeometry(QRect(40, 190, 120, 21));
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
    } // retranslateUi

};

namespace Ui {
    class svmInfo: public Ui_svmInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVMINFO_H
