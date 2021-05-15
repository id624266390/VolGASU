#include "Validator.h"
#include "stdafx.h"

Validator::Validator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QRegularExpression rx("\\d{4} \\d{6}");
    QValidator* validator = new QRegularExpressionValidator(rx, this);

    ui.passportIdInput->setValidator(validator);
}
