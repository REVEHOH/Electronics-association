#include "widget.h"
#include "ui_widget.h"
#include <QDialog>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QDialog * dialog = new QDialog(this);
//    dialog->show();
//    QDialog dialog(this);
//    dialog->setModal(true);
//    dialog->show();//非模态对话框
//    dialog.exec();//模态对话框
    connect(ui->showChlidButton,&QPushButton::clicked,this,&Widget::showChildDialog);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showChildDialog()
{
    QDialog * dialog = new QDialog(this);
    dialog -> show();
}
