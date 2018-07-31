#ifndef FORMSETICON_H
#define FORMSETICON_H

#include <QWidget>

namespace Ui {
class FormSetIcon;
}

class FormSetIcon : public QWidget
{
    Q_OBJECT

public:
    explicit FormSetIcon(QWidget *parent = 0);
    ~FormSetIcon();

private:
    Ui::FormSetIcon *ui;
};

#endif // FORMSETICON_H
