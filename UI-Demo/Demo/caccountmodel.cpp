#include "caccountmodel.h"

CAccountModel::CAccountModel()
{
    m_data.push_back(CAccountInfo("张三", "部门1", "", "电话：1234567890,地址:XXXXX"));
    m_data.push_back(CAccountInfo("李四", "部门2", "", "电话：1234567890,地址:XXXXX"));
    m_data.push_back(CAccountInfo("王五", "部门3", "", "电话：1234567890,地址:XXXXX"));
    m_data.push_back(CAccountInfo("朱六", "部门4", "", "电话：1234567890,地址:XXXXX"));
}

int CAccountModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant CAccountModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return "名称";
        case 1:
            return "部门";
        case 2:
            return "联系方式";
        }
    }
    return QVariant();
}

int CAccountModel::rowCount(const QModelIndex &parent) const
{
    return m_data.size();
}

QVariant CAccountModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        switch (index.column())
        {
        case 0:
            return m_data[index.row()].name;
        case 1:
            return m_data[index.row()].partment;
        case 2:
            return m_data[index.row()].communication;
        }
    }
    return QVariant();
}
