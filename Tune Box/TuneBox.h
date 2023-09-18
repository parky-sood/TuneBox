#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TuneBox.h"

class TuneBox : public QMainWindow
{
    Q_OBJECT

public:
    TuneBox(QWidget *parent = nullptr);
    ~TuneBox();

private:
    Ui::TuneBoxClass ui;
};
