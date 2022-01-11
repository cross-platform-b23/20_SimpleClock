#ifndef QMYTIMER_H
#define QMYTIMER_H

#include <QObject>
#include <QTimer>
class QMyTimer : public QObject
{
    Q_OBJECT
    QTimer m_Timer;
public:
    explicit QMyTimer(QObject *parent = nullptr);
    Q_INVOKABLE void startTimer();
    Q_INVOKABLE void stopTimer();

signals:
    void clockUpdate(const QString& currentDate, const QString& currentTime);
protected slots:
    void OnTimer1Sec();
};

#endif // QMYTIMER_H
