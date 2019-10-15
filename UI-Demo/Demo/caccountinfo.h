#ifndef CACCOUNTINFO_H
#define CACCOUNTINFO_H

#include <QString>

class CAccountInfo
{
public:
    CAccountInfo(const QString& _name, const QString& _partment, const QString& _password, const QString& _communication)
        :name(_name), partment(_partment), password(_password), communication(_communication){}
    QString name;
    QString partment;
    QString password;
    QString communication;
};

#endif // CACCOUNTINFO_H
