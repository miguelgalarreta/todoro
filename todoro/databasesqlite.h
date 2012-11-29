#ifndef DATABASESQLITE_H
#define DATABASESQLITE_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QFile>
#include <QDesktopServices>
#include <QFileDialog>
#include <QSettings>
#include <QMessageBox>
#include <QDebug>

class databaseSqlite
{
public:
    databaseSqlite();
    QSqlError lastError();
    bool createDatabase(QWidget * parent,QString *path=0);
    void closeDatabase();
    bool connectDatabase(const QString &path);
    bool openDatabase(QWidget *parent);
private:
    QSqlDatabase database;
};

#endif // DATABASESQLITE_H