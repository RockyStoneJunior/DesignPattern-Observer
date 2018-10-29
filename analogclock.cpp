#include "analogclock.h"
#include "clocktimer.h"

AnalogClock::AnalogClock(ClockTimer* s)
{
    _subject = s;
    _subject->Attach(this);
}

AnalogClock::~AnalogClock()
{
    _subject->Detach(this);
}

void AnalogClock::Update(Subject* theChangedSubject)
{
    if(theChangedSubject == _subject){
        Draw();
    }
}

void AnalogClock::Draw()
{
    int hour = _subject->GetHour();
    int minute = _subject->GetMinute();
}
