#ifndef CLOGINFO_H
#define CLOGINFO_H

#include <QString>

class CLogInfo
{
public:
    CLogInfo(const QString& date, const QString& level, const QString& sys, const QString& log)
        : strDate(date), strLevel(level), strSys(sys), strLog(log) {}
    QString strDate;
    QString strLevel;
    QString strSys;
    QString strLog;
};

#endif // CLOGINFO_H
