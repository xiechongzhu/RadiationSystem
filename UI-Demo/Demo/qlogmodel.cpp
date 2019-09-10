#include "qlogmodel.h"
#include <QDateTime>

QLogModel::QLogModel()
{
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "辐射防护数据集成与监控系统", "信息", "操作员张三登录成功"));
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "在线去污系统", "信息", "系统已启动"));
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "在线去污系统", "调试", "收到状态上报信息"));
    m_data.push_back(CLogInfo(QDateTime::currentDateTime().toString(), "在线去污系统", "错误", "发送控制命令失败"));
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
            return "系统名称";
        case 3:
            return "日志信息";
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
            return m_data[index.row()].strSys;
        case 2:
            return m_data[index.row()].strLevel;
        case 3:
            return m_data[index.row()].strLog;
        }
    }
    return QVariant();
}
