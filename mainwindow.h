#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <vector>

#include <employe.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void SearchEmploye();
    void AddEmploye();

private:
    Ui::MainWindow *ui;

    std::vector<Employe> employes;
};
#endif // MAINWINDOW_H
