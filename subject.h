#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>
#include <QList>
#include <QListIterator>

#include "observer.h"

class Subject : public QObject{
    Q_OBJECT
public:
    virtual ~Subject();

    virtual void Attach(Observer*);
    virtual void Detach(Observer*);
    virtual void Notify();

protected:
    Subject();

private:
    QList<Observer*>* _observers;
};

#endif // SUBJECT_H
