#include <QApplication>		//core Qt functionality
#include <QTranslator>		//for text translations
#include <QLocale>
#include <iostream>			//used for cout
#include "mainwindow.h"		//main application window

using namespace std;


int main(int argc, char *argv[])
{
	Q_INIT_RESOURCE(src);
	QApplication app(argc, argv);
	
	QTranslator tor( 0 );
	QLocale locale;
	// set the location where your .qm files are in load() below as the last parameter instead of "."
	// for development, use "/" to use the english original as
	// .qm files are stored in the base project directory.
	tor.load( QString("socnetv.") + locale.name(), "." );
	app.installTranslator( &tor );
  
	//Check if a filename is passed when this program is called.
	QString option;
    if ( argc > 1 )     {
        option = argv[1];
			if (option=="--help" || option=="-h" || option=="--h" ) {
				cout<<"\nSocial Network Visualizer v." << qPrintable(VERSION)<< "\n"
					<<"\nUsage: socnetv [flags] [file]\n"
					<<"-h, --help 	Displayes this help message\n"
					<<"-V, --version	Displays version number\n\n"
					<<"You can load a network from a file using \n"
					<<"socnetv file.net \n"
					<<"where file.net/csv/dot/graphml must be of valid format. See README\n\n"

					<<"Please send any bug reports to dimitris.kalamaras@gmail.com.\n\n";
				return -1;
			}
			else if (option=="-V" || option=="--version") {
				cout<<"\nSocial Network Visualizer v." << qPrintable(VERSION)
					<< "\nCopyright Dimitris V. Kalamaras, \nLicense: GPL3\n\n";
				return -1;
			}
			else  {
				cout<<"\nSocial Network Visualizer v." << qPrintable(VERSION);
				cout<<"\nLoading file: " << qPrintable(option) << "\n\n";
			}
		
	}
	MainWindow *socnetv=new MainWindow(option);
	socnetv->show();
	return app.exec();
}


