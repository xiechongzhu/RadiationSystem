#include "qtaskdatamodel.h"
#include <QDateTime>

QTaskDataModel::QTaskDataModel()
{
    m_data.push_back(CTaskInfo(QDateTime::currentDateTime().toString(), "任务1", "在线去污组件", "下发成功"));
    m_data.push_back(CTaskInfo(QDateTime::currentDateTime().toString(), "任务2", "在线去污组件", "执行成功"));
    m_data.push_back(CTaskInfo(QDateTime::currentDateTime().toString(), "任务3", "在线去污组件", "执行失败"));
}

int QTaskDataModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant QTaskDataModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return "时间";
        case 1:
            return "任务名称";
        case 2:
            return "目的组件";
        case 3:
            return "执行情况";
        }
    }
    return QVariant();
}

int QTaskDataModel::rowCount(const QModelIndex &parent) const
{
    return m_data.size();
}

QVariant QTaskDataModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        switch (index.column())
        {
        case 0:
            return m_data[index.row()].strDate;
        case 1:
            return m_data[index.row()].strName;
        case 2:
            return m_data[index.row()].strDestSys;
        case 3:
            return m_data[index.row()].strDescrip;
        }
    }
    return QVariant();
}
