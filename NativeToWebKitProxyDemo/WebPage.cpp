#include "WebPage.h"
 
#include <QDebug>
 
WebPage::WebPage(QObject *parent): QWebPage(parent){
}
 
void WebPage::javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID){
   qDebug() << message;
}