#include <QApplication>
#include "BookTracker.h"

int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	BookTracker win;
	win.show(); 
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
