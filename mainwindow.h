//
// Created by Happiness on 11/29/2024.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addEntry();
    void deleteEntry();

private:
    QTableWidget *table;
    QPushButton *addButton;
    QPushButton *deleteButton;
};

#endif // MAINWINDOW_H
