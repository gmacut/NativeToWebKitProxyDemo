This project demostrates connecting of native code to javasctipt running inside WebKit. 

This funcionality is essential to development of thin clients that run remote html/javascript
applications, but still require some interaction with the machine they're on. 

Qt 4.7 is used with it's WebKit components. Solution is developed using VS2008, but it's 
cross platform in it's nature and should be easily compiled on other platforms where Qt 
is available.

Solution consists of two main parts, a TCP server that listens on a port 2345 and a Qt's
WebKit browser implementation that displays a html page. Server is exposed in javascript 
as a global object that enables registering of handlers. Registered handlers get called 
when a server recieves data.

Litarature:
	Exposing native objects to javascript in QtWebKit:
		http://doc.qt.nokia.com/4.7-snapshot/qtwebkit-bridge.html 