#ifndef QCTRLMODEL_H
#define QCTRLMODEL_H

#include <QAbstractTableModel>
#include <QVector>
#include "ccontrolinfo.h"

class QCtrlModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    QVector<CControlInfo> m_data;
    QCtrlModel();
    int columnCount(const QModelIndex &parent) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // QCTRLMODEL_H
