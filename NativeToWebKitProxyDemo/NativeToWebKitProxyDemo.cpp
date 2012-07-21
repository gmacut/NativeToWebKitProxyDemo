#include "NativeToWebKitProxyDemo.h"
#include <QFile>
#include <QWebFrame>


NativeToWebKitProxyDemo::NativeToWebKitProxyDemo(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.webView->setPage(&page);

	// exposing our server as 'nativeHandler' inside javasctipt
	// see: http://doc.qt.nokia.com/4.7-snapshot/qtwebkit-bridge.html
	ui.webView->page()->mainFrame()->addToJavaScriptWindowObject(QString("nativeHandler"), &s);
	this->showFullScreen();
	

	QFile file("page.html");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
		return;
	while (!file.atEnd()) {
		QByteArray content = file.readAll();
		ui.webView->setHtml(content);
	}

}

NativeToWebKitProxyDemo::~NativeToWebKitProxyDemo()
{

}
