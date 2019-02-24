#include <QtGui/QApplication>
#include <QTextCodec>
#include "widget.h"
#include "mydialog.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    Widget w;
    MyDialog dialog;
    
    if(dialog.exec() == QDialog::Accepted)
    {
        w.show();
	return a.exec();
    }
}
