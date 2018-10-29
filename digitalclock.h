#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include "observer.h"
#include "clocktimer.h"
#include "subject.h"

class DigitalClock : public Observer{
public:
    DigitalClock(ClockTimer*);
    virtual ~DigitalClock();

    virtual void Update(Subject*);
    virtual void Draw();

private:
    ClockTimer* _subject;
};

#endif // DIGITALCLOCK_H
