#ifndef SVMINFO_H
#define SVMINFO_H

#include <QString>
#include <QDockWidget>
#include "singviewmodel.h"
#include "hpoint.h"

class hPoint;
class singviewmodel;

namespace Ui {
class svmInfo;
}

class svmInfo : public QWidget
{
    Q_OBJECT
private:
    Ui::svmInfo *ui;

public:
    explicit svmInfo(QWidget*, singviewmodel&);
    ~svmInfo();

    int tab, check;
    const char* vp_disp[3]={"VPX", "VPY", "VPZ"};
    const char* point_disp[3][4]={{"x1", "x2", "x3", "x4"},
                             {"y1", "y2", "y3", "y4"},
                             {"z1", "z2", "z3", "z4"}};
    const char* x1_label_disp[3]={"X1", "Y1", "Z1"};
    const char* x2_label_disp[3]={"X2", "Y2", "Z2"};
    const char* x3_label_disp[3]={"X3", "Y3", "Z3"};
    const char* x4_label_disp[3]={"X4", "Y4", "Z4"};
    singviewmodel* svm;

signals:
    void svmChanged();
    void test3D(int);

private slots:
    void comboChanged(int);
    void checkChanged();
    void ref3DChanged();
    void testChecked(int);

public slots:
    void updateLabel();
    void setTestPoint(int, int);
};

#endif // SVMINFO_H
