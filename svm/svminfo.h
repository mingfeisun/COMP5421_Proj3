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
    int o_x, o_y;
    const char* vp_disp[3]={"VPX", "VPY", "VPZ"};
    const char* xp_disp[4]={"x1", "x2", "x3", "x4"};
    singviewmodel* svm;

signals:
    void pointChanged(int, int);
    void distanceChanged(double);
    void originChanged(int, int);

private slots:
    void comboChanged(int);
    void checkChanged();
    void innerDisChanged(double);
    void innerOriChanged_x(QString);
    void innerOriChanged_y(QString);

public slots:
    void updateLabel();
};

#endif // SVMINFO_H
