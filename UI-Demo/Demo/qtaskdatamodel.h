#ifndef QTASKDATAMODEL_H
#define QTASKDATAMODEL_H

#include <QAbstractTableModel>
#include "ctaskinfo.h"

class QTaskDataModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    QTaskDataModel();
    QVector<CTaskInfo> m_data;
    int columnCount(const QModelIndex &parent) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // QTASKDATAMODEL_H
