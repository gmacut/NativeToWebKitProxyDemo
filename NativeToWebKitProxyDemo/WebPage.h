#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QObject>
#include <QWebPage>
 
/**
 * Custom QWebPage is used only for outputing javascript console messages to debug output
 */
class WebPage : public QWebPage
{
    Q_OBJECT
public:
    WebPage(QObject * parent = 0 );
protected:
	/**
	 * Gets called when javascript console has something to output
	 */
    void javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID);
};
#endif // WEBPAGE_H