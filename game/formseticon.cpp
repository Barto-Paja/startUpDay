#include "formseticon.h"
#include "ui_formseticon.h"

FormSetIcon::FormSetIcon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSetIcon)
{
    ui->setupUi(this);
    ui->horizontalLayout->setAlignment(ui->radioButton,Qt::AlignCenter);
    ui->horizontalLayout->setAlignment(ui->radioButton_2,Qt::AlignCenter);
    ui->horizontalLayout->setAlignment(ui->radioButton_3,Qt::AlignCenter);
    ui->horizontalLayout->setAlignment(ui->radioButton_4,Qt::AlignCenter);

    ui->horizontalLayout_2->setAlignment(ui->label,Qt::AlignCenter);
    ui->horizontalLayout_2->setAlignment(ui->label_2,Qt::AlignCenter);
    ui->horizontalLayout_2->setAlignment(ui->label_3,Qt::AlignCenter);
    ui->horizontalLayout_2->setAlignment(ui->label_4,Qt::AlignCenter);
}

FormSetIcon::~FormSetIcon()
{
    delete ui;
}
