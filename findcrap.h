#ifndef FINDCRAP_H
#define FINDCRAP_H

#include <QWidget>

namespace Ui {
class findCrap;
}

class findCrap : public QWidget
{
    Q_OBJECT

public:
    explicit findCrap(QWidget *parent = 0);
    ~findCrap();

private slots:
    void on_goButton_clicked();

private:
    Ui::findCrap *ui;
    void getTextFile();
};

#endif // FINDCRAP_H
