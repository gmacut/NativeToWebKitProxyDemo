#ifndef NATIVETOWEBKITPROXY_H
#define NATIVETOWEBKITPROXY_H

#include <QtGui/QMainWindow>
#include "NativeToWebKitProxyDemo.h"
#include "ui_NativeToWebKitProxyDemo.h"


#include "TCPServer.h"
#include "WebPage.h"

/**
 * Main class. Constructs a server and a window and connects everything.
 * UI is in NativeToWebKitProxy.ui. Reads page.html file from the running directory
 * and loads it to the GUI.
 */
class NativeToWebKitProxyDemo : public QMainWindow
{
	Q_OBJECT
	TCPServer s;
	WebPage page;
public:
	NativeToWebKitProxyDemo(QWidget *parent = 0, Qt::WFlags flags = 0);
	~NativeToWebKitProxyDemo();
private:
	Ui::NativeToWebKitProxyDemo ui;
};

#endif // NATIVETOWEBKITPROXY_H
