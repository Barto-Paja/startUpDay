#include "formskilltree.h"
#include "ui_formskilltree.h"

FormSkillTree::FormSkillTree(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSkillTree)
{
    ui->setupUi(this);
}

FormSkillTree::~FormSkillTree()
{
    delete ui;
}
