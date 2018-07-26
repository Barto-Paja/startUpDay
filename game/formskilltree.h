#ifndef FORMSKILLTREE_H
#define FORMSKILLTREE_H

#include <QWidget>

namespace Ui {
class FormSkillTree;
}

class FormSkillTree : public QWidget
{
    Q_OBJECT

public:
    explicit FormSkillTree(QWidget *parent = 0);
    ~FormSkillTree();

private:
    Ui::FormSkillTree *ui;
};

#endif // FORMSKILLTREE_H
