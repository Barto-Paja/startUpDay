#ifndef NEWGAMEFORM_H
#define NEWGAMEFORM_H

#include <QWidget>

namespace Ui {
class NewGameForm;
}

class NewGameForm : public QWidget
{
    Q_OBJECT

public:
    explicit NewGameForm(QWidget *parent = 0);
    ~NewGameForm();

private:
    Ui::NewGameForm *ui;
};

#endif // NEWGAMEFORM_H
