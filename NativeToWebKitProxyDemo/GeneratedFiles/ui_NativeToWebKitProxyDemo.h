/********************************************************************************
** Form generated from reading UI file 'NativeToWebKitProxyDemo.ui'
**
** Created: Sat 21. Jul 11:06:50 2012
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NATIVETOWEBKITPROXYDEMO_H
#define UI_NATIVETOWEBKITPROXYDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_NativeToWebKitProxyDemo
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWebView *webView;

    void setupUi(QMainWindow *NativeToWebKitProxyDemo)
    {
        if (NativeToWebKitProxyDemo->objectName().isEmpty())
            NativeToWebKitProxyDemo->setObjectName(QString::fromUtf8("NativeToWebKitProxyDemo"));
        NativeToWebKitProxyDemo->resize(600, 400);
        centralWidget = new QWidget(NativeToWebKitProxyDemo);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webView = new QWebView(centralWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("http://www.google.hr/"));

        gridLayout->addWidget(webView, 0, 0, 1, 1);

        NativeToWebKitProxyDemo->setCentralWidget(centralWidget);

        retranslateUi(NativeToWebKitProxyDemo);

        QMetaObject::connectSlotsByName(NativeToWebKitProxyDemo);
    } // setupUi

    void retranslateUi(QMainWindow *NativeToWebKitProxyDemo)
    {
        NativeToWebKitProxyDemo->setWindowTitle(QApplication::translate("NativeToWebKitProxyDemo", "WebkitJsProxy", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NativeToWebKitProxyDemo: public Ui_NativeToWebKitProxyDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATIVETOWEBKITPROXYDEMO_H
