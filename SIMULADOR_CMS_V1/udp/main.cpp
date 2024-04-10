#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w; // Create an instance of Widget
    w.show(); // Show the Widget
    return a.exec(); // Start the application event loop
}
