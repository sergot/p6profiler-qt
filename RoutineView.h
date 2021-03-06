#ifndef _ROUTINE_VIEW_
#define _ROUTINE_VIEW_
#include "RoutineListModel.h"
#include <QTableView>
#include <QHeaderView>
#include <QWidget>
#include <QSortFilterProxyModel>
#include <QLineEdit>
#include <QVBoxLayout>

class RoutineView : public QWidget {
    Q_OBJECT;
    QVBoxLayout *vbox;
    QTableView *tableView;
    QLineEdit *searchField;
    QSortFilterProxyModel sfpmodel;

public:
    RoutineView(QWidget *parent = 0);
    void setModel(RoutineListModel *);

public slots:
    void setFilterText(const QString&);
};

#endif
