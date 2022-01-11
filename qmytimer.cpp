#include "qmytimer.h"
#include <QDateTime>

QMyTimer::QMyTimer(QObject *parent) : QObject(parent)
{
    connect(&m_Timer, SIGNAL(timeout()), this, SLOT(OnTimer1Sec()));
}

void QMyTimer::startTimer()
{
    qDebug("QMyTimer::startTimer()");
    m_Timer.start(1000);
}

void QMyTimer::stopTimer()
{
    m_Timer.stop();
}

void QMyTimer::OnTimer1Sec()
{
    QDateTime now = QDateTime::currentDateTime();
    emit clockUpdate(now.toString("dd MMM yyyy"),
                     now.toString("hh:mm:ss"));

}
