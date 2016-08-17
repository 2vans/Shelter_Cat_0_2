#include "shelter_cats_0_2.h"
#include "ui_shelter_cats_0_2.h"

Shelter_Cats_0_2::Shelter_Cats_0_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shelter_Cats_0_2)
{
    ui->setupUi(this);
}

Shelter_Cats_0_2::~Shelter_Cats_0_2()
{
    delete ui;
}
