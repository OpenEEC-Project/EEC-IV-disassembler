/********************************************************************************
** Form generated from reading UI file 'sad_main.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SAD_UI_H
#define SAD_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSeletBinary;
    QAction *actionExit;
    QAction *actionDisassemble;
    QAction *actionRead_Directives;
    QAction *actionRead_Comments;
    QAction *actionRead_Messages;
    QAction *actionRead_List;
    QAction *actionContents;
    QAction *actionAbout;
    QAction *action;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuOutput;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(282, 163);
        QIcon icon;
        icon.addFile(QString::fromUtf8("sad/1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSeletBinary = new QAction(MainWindow);
        actionSeletBinary->setObjectName(QString::fromUtf8("actionSeletBinary"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionDisassemble = new QAction(MainWindow);
        actionDisassemble->setObjectName(QString::fromUtf8("actionDisassemble"));
        actionRead_Directives = new QAction(MainWindow);
        actionRead_Directives->setObjectName(QString::fromUtf8("actionRead_Directives"));
        actionRead_Comments = new QAction(MainWindow);
        actionRead_Comments->setObjectName(QString::fromUtf8("actionRead_Comments"));
        actionRead_Messages = new QAction(MainWindow);
        actionRead_Messages->setObjectName(QString::fromUtf8("actionRead_Messages"));
        actionRead_List = new QAction(MainWindow);
        actionRead_List->setObjectName(QString::fromUtf8("actionRead_List"));
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 282, 15));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuOutput = new QMenu(menubar);
        menuOutput->setObjectName(QString::fromUtf8("menuOutput"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuOutput->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSeletBinary);
        menuFile->addAction(actionExit);
        menuTools->addAction(actionDisassemble);
        menuTools->addAction(action);
        menuOutput->addAction(actionRead_Directives);
        menuOutput->addAction(actionRead_Comments);
        menuOutput->addAction(actionRead_Messages);
        menuOutput->addAction(actionRead_List);
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EEC Disassembler", 0, QApplication::UnicodeUTF8));
        actionSeletBinary->setText(QApplication::translate("MainWindow", "Select Binary", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionDisassemble->setText(QApplication::translate("MainWindow", "Disassemble", 0, QApplication::UnicodeUTF8));
        actionRead_Directives->setText(QApplication::translate("MainWindow", "Read Directives", 0, QApplication::UnicodeUTF8));
        actionRead_Comments->setText(QApplication::translate("MainWindow", "Read Comments", 0, QApplication::UnicodeUTF8));
        actionRead_Messages->setText(QApplication::translate("MainWindow", "Read Messages", 0, QApplication::UnicodeUTF8));
        actionRead_List->setText(QApplication::translate("MainWindow", "Read List", 0, QApplication::UnicodeUTF8));
        actionContents->setText(QApplication::translate("MainWindow", "Contents", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "Properties", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuOutput->setTitle(QApplication::translate("MainWindow", "Output", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SAD_UI_H
