#ifndef CHECKABLESORTFILTERPROXYMODEL_H
#define CHECKABLESORTFILTERPROXYMODEL_H

#include <QSortFilterProxyModel>

class CheckableSortFilterProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    explicit CheckableSortFilterProxyModel(QObject *parent = 0);

    void setParameters(QList<int> boolCols);
 protected:
    QVariant data(const QModelIndex &index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    Qt::ItemFlags flags ( const QModelIndex & index ) const;


signals:

public slots:

private:
    QList<int> booleanSet;


};

#endif // CHECKABLESORTFILTERPROXYMODEL_H
