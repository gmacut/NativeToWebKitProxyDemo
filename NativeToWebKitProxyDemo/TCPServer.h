#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

/**
 * Listens on local port 2345. Signal gotData is emitted when 
 * data is received
 */
class TCPServer: public QObject
{
Q_OBJECT
public:
  TCPServer(QObject * parent = 0);
  ~TCPServer();
signals:
  void gotData(QString);
public slots:
  void acceptConnection();
  void startRead();
private:
  QTcpServer server;
  QTcpSocket* client;
};

