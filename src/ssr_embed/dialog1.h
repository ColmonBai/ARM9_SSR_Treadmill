#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>

namespace Ui {
    class Dialog1;
}

class Dialog1 : public QDialog {
    Q_OBJECT
public:
    Dialog1(QWidget *parent = 0);
    ~Dialog1();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
