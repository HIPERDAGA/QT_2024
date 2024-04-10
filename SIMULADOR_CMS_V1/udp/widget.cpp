#include "widget.h"
#include "ui_widget.h"
#include <QUdpSocket>

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)

{
    ui->setupUi(this);
    mSocket = new QUdpSocket(this);
    setWindowTitle("SIMULADOR_PUERTOS");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_enviar1_clicked()
{
    QByteArray datagrama1 = ui->msj1->text().toUtf8();
    mSocket->writeDatagram(datagrama1, QHostAddress::Broadcast, quint16(ui->puerto1->value()));
}

void Widget::on_enviar2_clicked()
{
    QByteArray datagrama2 = ui->msj2->text().toUtf8();
    mSocket->writeDatagram(datagrama2, QHostAddress::Broadcast, quint16(ui->puerto2->value()));
 }

void Widget::on_enviar3_clicked()
{
    QByteArray datagrama3 = ui->msj3->text().toUtf8();
    mSocket->writeDatagram(datagrama3, QHostAddress::Broadcast, quint16(ui->puerto3->value()));
}

void Widget::on_enviar4_clicked()
{
    QByteArray datagrama4 = ui->msj4->text().toUtf8();
    mSocket->writeDatagram(datagrama4, QHostAddress::Broadcast, quint16(ui->puerto4->value()));
}
