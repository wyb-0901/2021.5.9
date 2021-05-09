#include "widget.h"
#include "ui_widget.h"
#include<QString>
#include<QByteArray>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("          客户端")
    _socket=new QTcpSocket;
    _socket->connectToHost("127")
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()//退出
{

}

void Widget::on_pushButton_2_clicked()//发送
{
    Qstring str1=ui->textEdit->toPlainText()();
    //1
    //发送数据
    QByteArray buff=str1.toUtf8();
    _socket->write(buff);
    //清空本地文本框


}
