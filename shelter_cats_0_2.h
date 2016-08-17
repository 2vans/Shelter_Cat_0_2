#ifndef SHELTER_CATS_0_2_H
#define SHELTER_CATS_0_2_H

#include <QWidget>

namespace Ui {
class Shelter_Cats_0_2;
}

class Shelter_Cats_0_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Shelter_Cats_0_2(QWidget *parent = 0);
    ~Shelter_Cats_0_2();

private:
    Ui::Shelter_Cats_0_2 *ui;
};

#endif // SHELTER_CATS_0_2_H
