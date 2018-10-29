#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QVBoxLayout>

#include "clocktimer.h"
#include "analogclock.h"
#include "digitalclock.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    setLayout(mainLayout);

    QPushButton *button = new QPushButton("Tick");
//    ClockTimer *timer = new ClockTimer;
//    AnalogClock *analogClock = new AnalogClock(timer);
//    DigitalClock *digitalClock = new DigitalClock(timer);

//    connect(button, SIGNAL(clicked()), timer, SLOT(Tick()));
    mainLayout->addWidget(button);
}

MainWindow::~MainWindow()
{
    delete ui;
}
