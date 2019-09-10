#ifndef CTASKINFO_H
#define CTASKINFO_H
#include <QString>

class CTaskInfo
{
public:
    CTaskInfo(const QString& date, const QString& name, const QString& sys, const QString& desc)
        :strDate(date), strName(name), strDestSys(sys), strDescrip(desc)
    {}
public:
    QString strDate;
    QString strName;
    QString strDestSys;
    QString strDescrip;
};

#endif // CTASKINFO_H
