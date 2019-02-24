#include "widget.h"
#include "ui_widget.h"
#include <QtGui/QApplication>
#include <QWidget>
#include <QLabel>
#include <QListWidget>
#include <QHBoxLayout>
#include <QIcon>

#include "dcm.h"
#include "tcp.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;


}

void Widget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Widget::on_pushButton_clicked()
{
	int num=1;
	ui->lcdNumber->display(num);
        DcmSetSpeed(512*4);

        char ans[5] = {"0"};
        ans[0] = '0' + 1;
        SendBuff(ans);
}
void Widget::on_pushButton_2_clicked()
{
        int num=2;
        ui->lcdNumber->display(num);
        DcmSetSpeed(512*8);

        char ans[5] = {"0"};
        ans[0] = '0' + 2;
        SendBuff(ans);
}
void Widget::on_pushButton_3_clicked()
{
        int num=3;
        ui->lcdNumber->display(num);
        DcmSetSpeed(512*12);

        char ans[5] = {"0"};
        ans[0] = '0' + 3;
        SendBuff(ans);
}
void Widget::on_pushButton_4_clicked()
{
        int num=4;
        ui->lcdNumber->display(num);
        DcmSetSpeed(512*16);

        char ans[5] = {"0"};
        ans[0] = '0' + 4;
        SendBuff(ans);
}



void Widget::on_pushButton_5_clicked()
{
    DcmOpen();
}

void Widget::on_pushButton_6_clicked()
{
    DcmClose();
}
