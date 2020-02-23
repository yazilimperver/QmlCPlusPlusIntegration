// Our source file
#include "BackEndClass.h"
#include <qdebug>


int BackEndClass::incrementCounter(){
    return mCounter++;
}

BackEndClass::BackEndClass(QObject *parent)
    : QObject(parent)
{
    qDebug() << "An instance of BackEndClass is created!";
}

void BackEndClass::setMessage(const QString &msg)
{
    mMessage = msg;
    emit messageChanged();
}

QString BackEndClass::message() const
{
    return mMessage;
}

void BackEndClass::resetCounter()
{
    mCounter = 0;
}
