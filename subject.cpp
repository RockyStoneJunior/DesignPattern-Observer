#include "subject.h"

void Subject::Attach(Observer* o)
{
    _observers->append(o);
}

void Subject::Detach(Observer* o)
{
    _observers->removeOne(o);
}

void Subject::Notify()
{
    QListIterator<Observer*> i(*_observers);

    while (i.hasNext()) {
        i.next()->Update(this);
    }
}
