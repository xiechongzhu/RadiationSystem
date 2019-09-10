#ifndef QLOGMODEL_H
#define QLOGMODEL_H

#include <QAbstractTableModel>
#include <QVector>
#include "cloginfo.h"

class QLogModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    QVector<CLogInfo> m_data;
    QLogModel();
    int columnCount(const QModelIndex &parent) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // QLOGMODEL_H
