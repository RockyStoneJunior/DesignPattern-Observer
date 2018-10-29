#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include "observer.h"
#include "clocktimer.h"
#include "subject.h"

class AnalogClock : public Observer{
public:
    AnalogClock(ClockTimer*);
    virtual ~AnalogClock();

    virtual void Update(Subject*);
    virtual void Draw();

private:
    ClockTimer* _subject;
};

#endif // ANALOGCLOCK_H
