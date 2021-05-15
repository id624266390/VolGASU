#pragma once

#include <QtWidgets/QMainWindow>
#include <qregularexpression.h>
#include "ui_Validator.h"

class Validator : public QMainWindow
{
    Q_OBJECT

public:
    Validator(QWidget *parent = Q_NULLPTR);

private:
    Ui::ValidatorClass ui;
};
