#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include "findcrap.h"
#include "ui_findcrap.h"
#include <string.h>

findCrap::findCrap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::findCrap)
{
    ui->setupUi(this);
    getTextFile();
}

findCrap::~findCrap()
{
    delete ui;
}

void findCrap::getTextFile(){
    QFile myFile (":/matsuno.rtf");
    myFile.open(QIODevice::ReadOnly);
    QTextStream textStream(&myFile);
    QString line = textStream.readAll();
    myFile.close();

    ui->textEdit->setPlainText(line);
    //QTextCursor textCursor = ui->textEdit->textCursor();
    //textCursor.movePosition(QTextCursor::Start,
    //                        QTextCursor::MoveAnchor,1);
}


void findCrap::on_goButton_clicked()
{
    QString word = "";

    word = ui->lineEdit->text();

    ui->textEdit->find(word);
}
