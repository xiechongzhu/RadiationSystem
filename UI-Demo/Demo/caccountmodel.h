#ifndef CACCOUNTMODEL_H
#define CACCOUNTMODEL_H

#include <QAbstractTableModel>
#include <QVector>
#include "caccountinfo.h"

class CAccountModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    CAccountModel();
    QVector<CAccountInfo> m_data;
    int columnCount(const QModelIndex &parent) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // CACCOUNTMODEL_H
