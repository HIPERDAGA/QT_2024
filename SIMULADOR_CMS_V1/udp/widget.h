#ifndef WIDGET_H
#define WIDGET_H
#include "ui_widget.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QUdpSocket;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr); // Constructor
    ~Widget(); // Destructor

private slots:
    void on_enviar1_clicked();
    void on_enviar2_clicked();
    void on_enviar3_clicked();
    void on_enviar4_clicked();


private:
    Ui::Widget *ui;
    QUdpSocket *mSocket;
};
#endif // WIDGET_H
