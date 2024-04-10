#include <QtNetwork>

class UdpListener : public QObject
{
    Q_OBJECT
public:
    explicit UdpListener(QObject *parent = nullptr) : QObject(parent)
    {
        udpSocket = new QUdpSocket(this);
        connect(udpSocket, &QUdpSocket::readyRead, this, &UdpListener::readPendingDatagrams);

        // Bind the socket to listen on a specific port
        udpSocket->bind(QHostAddress::Any, 8000); // Change 1234 to your desired port number
    }

public slots:
    void readPendingDatagrams()
    {
        while (udpSocket->hasPendingDatagrams()) {
            QByteArray datagram;
            datagram.resize(udpSocket->pendingDatagramSize());
            QHostAddress sender;
            quint16 senderPort;

            udpSocket->readDatagram(datagram.data(), datagram.size(), &sender, &senderPort);
            qDebug() << "Received datagram:" << datagram;
            qDebug() << "Sender IP:" << sender.toString();
            qDebug() << "Sender Port:" << senderPort;
        }
    }

private:
    QUdpSocket *udpSocket;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UdpListener listener;

    return a.exec();
}

#include "main.moc"
