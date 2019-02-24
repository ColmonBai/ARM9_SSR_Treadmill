#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
    class Widget;
}

class Widget : public QWidget {
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Widget *ui;
    //Dialog1 dialog1;

private slots:
        void on_pushButton_clicked(bool checked);
        void on_lcdNumber_overflow();
        void on_horizontalSlider_sliderMoved(int position);
        void on_pushButton_6_clicked();
 void on_pushButton_5_clicked();
 void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_4_clicked();




};

#endif // WIDGET_H
