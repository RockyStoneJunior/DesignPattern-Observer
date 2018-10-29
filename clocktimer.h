#ifndef CLOCKTIMER_H
#define CLOCKTIMER_H

#include "subject.h"

class ClockTimer : public Subject{
    Q_OBJECT

public:
    ClockTimer();

    virtual int GetHour();
    virtual int GetMinute();
    virtual int GetSecond();

public slots:
    void Tick();
};

#endif // CLOCKTIMER_H
