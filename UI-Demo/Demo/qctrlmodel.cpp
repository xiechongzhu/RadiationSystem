#include "qctrlmodel.h"
#include <QDateTime>

QCtrlModel::QCtrlModel()
{
    m_data.push_back(CControlInfo(QDateTime::currentDateTime().toString(), "控制命令1", "在线去污组件", "下发成功"));
    m_data.push_back(CControlInfo(QDateTime::currentDateTime().toString(), "控制命令2", "在线去污组件", "执行成功"));
    m_data.push_back(CControlInfo(QDateTime::currentDateTime().toString(), "控制命令3", "在线去污组件", "执行失败"));
}

int QCtrlModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant QCtrlModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return "时间";
        case 1:
            return "命令";
        case 2:
            return "目的组件";
        case 3:
            return "执行情况";
        }
    }
    return QVariant();
}

int QCtrlModel::rowCount(const QModelIndex &parent) const
{
    return m_data.size();
}

QVariant QCtrlModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        switch (index.column())
        {
        case 0:
            return m_data[index.row()].strDate;
        case 1:
            return m_data[index.row()].strCmd;
        case 2:
            return m_data[index.row()].strDestSys;
        case 3:
            return m_data[index.row()].strDesc;
        }
    }
    return QVariant();
}
