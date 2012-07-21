#include "TCPServer.h"
#include <iostream>

using namespace std;

TCPServer::TCPServer(QObject* parent): QObject(parent)
{
  connect(&server, SIGNAL(newConnection()),
    this, SLOT(acceptConnection()));

  server.listen(QHostAddress::Any, 2345);
}

TCPServer::~TCPServer()
{
  server.close();
}

void TCPServer::acceptConnection()
{
  client = server.nextPendingConnection();

  connect(client, SIGNAL(readyRead()),
    this, SLOT(startRead()));
}

void TCPServer::startRead()
{
  QString data = QString(client->readAll());
  client->close();
  emit gotData(data);
}
