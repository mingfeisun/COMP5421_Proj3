#ifndef SHOWLABEL_H
#define SHOWLABEL_H
#include <QLabel>
#include <QObject>
#include <QMouseEvent>

class showLabel : public QLabel
{
    Q_OBJECT
public:

    showLabel(QWidget* parent =0):QLabel(parent){
    }

    void mouseReleaseEvent(QMouseEvent *ev){
        int x=ev->x();
        int y=ev->y();
        emit mouseClick(x, y);
    }

signals:
    void mouseClick(int, int);
};

#endif // SHOWLABEL_H
