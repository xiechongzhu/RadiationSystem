#ifndef CCONTROLINFO_H
#define CCONTROLINFO_H

#include <QString>

class CControlInfo
{
public:
    CControlInfo(const QString& date, const QString& cmd, const QString& sys, const QString& desc)
        : strDate(date), strCmd(cmd), strDestSys(sys), strDesc(desc){}
    QString strDate;
    QString strCmd;
    QString strDestSys;
    QString strDesc;
};

#endif // CCONTROLINFO_H
