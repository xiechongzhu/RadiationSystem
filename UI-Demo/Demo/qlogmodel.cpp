#include "qlogmodel.h"
#include <QDateTime>

QLogModel::QLogModel()
{
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "信息", "在线去污组件", "XXXX操作成功"));
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "信息", "在线去污组件", "XXXX操作成功"));
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "错误", "在线去污组件", "XXXX操作失败"));
}

int QLogModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant QLogModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return "时间";
        case 1:
            return "等级";
        case 2:
            return "组件";
        case 3:
            return "日志";
        }
    }
    return QVariant();
}

int QLogModel::rowCount(const QModelIndex &parent) const
{
    return m_data.size();
}

QVariant QLogModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        switch (index.column())
        {
        case 0:
            return m_data[index.row()].strDate;
        case 1:
            return m_data[index.row()].strLevel;
        case 2:
            return m_data[index.row()].strSys;
        case 3:
            return m_data[index.row()].strLog;
        }
    }
    return QVariant();
}
