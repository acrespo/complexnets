#ifndef GNUPLOTCONSOLE_H
#define GNUPLOTCONSOLE_H

#include <fstream>
#include <QDialog>
#include <cstdio>
#include <iostream>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTextBrowser>
#include "../../ComplexNets/mili/mili.h"

namespace ComplexNetsGui
{
class GnuplotConsole : public QDialog
{
    Q_OBJECT
public:
    GnuplotConsole(QWidget* parent = 0);
    ~GnuplotConsole();
    bool plotPropertySet(const VariantsSet& set, const std::string& propertyName, const bool logBin = false);
    void writeCommand(const std::string& command);
    //void closeDialog();

    QGroupBox* groupBox;
    QTextBrowser* textBrowser;
    QGroupBox* groupBox_2;
    QLineEdit* lineEdit;

private slots:
    void commandEntered();

private:
    std::ifstream outputFile;
    FILE* pipe;

};
}

#endif
