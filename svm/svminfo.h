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
    explicit svmInfo(QWidget*, singviewmodel*);
    ~svmInfo();

    int tab, check;
    const char* vp_disp[3]={"VPX", "VPY", "VPZ"};
    const char* xp_disp[4]={"x1", "x2", "x3", "x4"};
    singviewmodel* svm;

signals:
    void pointChanged(int, int);

private slots:
    void comboChanged(int);
    void checkChanged();

public slots:
    void updateLabel();
};

#endif // SVMINFO_H