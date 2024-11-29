//
// Created by Happiness on 11/29/2024.
//

#include "mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    // Set up main window
    setWindowTitle("Lab 3 - Information System");
    setGeometry(100, 100, 600, 400);

    // Table Widget
    table = new QTableWidget(this);
    table->setColumnCount(3); // Example: Name, Age, Details
    table->setHorizontalHeaderLabels({"Name", "Age", "Details"});

    // Buttons
    addButton = new QPushButton("Add", this);
    deleteButton = new QPushButton("Delete", this);

    // Layout
    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *buttonLayout = new QHBoxLayout();

    buttonLayout->addWidget(addButton);
    buttonLayout->addWidget(deleteButton);

    mainLayout->addWidget(table);
    mainLayout->addLayout(buttonLayout);

    QWidget *mainWidget = new QWidget(this);
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);

    // Connect Signals and Slots
    connect(addButton, &QPushButton::clicked, this, &MainWindow::addEntry);
    connect(deleteButton, &QPushButton::clicked, this, &MainWindow::deleteEntry);
}

MainWindow::~MainWindow() {}

void MainWindow::addEntry() {
    // Prompt user for input
    bool ok;
    QString name = QInputDialog::getText(this, "Add Entry", "Name:", QLineEdit::Normal, "", &ok);
    if (!ok || name.isEmpty()) return;

    QString age = QInputDialog::getText(this, "Add Entry", "Age:", QLineEdit::Normal, "", &ok);
    if (!ok || age.isEmpty()) return;

    QString details = QInputDialog::getText(this, "Add Entry", "Details:", QLineEdit::Normal, "", &ok);
    if (!ok || details.isEmpty()) return;

    // Add entry to table
    int row = table->rowCount();
    table->insertRow(row);
    table->setItem(row, 0, new QTableWidgetItem(name));
    table->setItem(row, 1, new QTableWidgetItem(age));
    table->setItem(row, 2, new QTableWidgetItem(details));
}

void MainWindow::deleteEntry() {
    // Get selected row
    int row = table->currentRow();
    if (row == -1) {
        QMessageBox::warning(this, "Delete Entry", "Please select a row to delete.");
        return;
    }
    table->removeRow(row);
}
