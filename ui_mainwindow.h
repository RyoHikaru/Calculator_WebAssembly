/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_right;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Close;
    QPushButton *pushButton_divid;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_5;
    QPushButton *pushButton_point;
    QPushButton *pushButton_mutiple;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_left;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_or;
    QPushButton *pushButton_1;
    QPushButton *pushButton_no;
    QPushButton *pushButton_6;
    QPushButton *pushButton_and;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(392, 465);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_9, 3, 3, 1, 1);

        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName("pushButton_right");
        sizePolicy.setHeightForWidth(pushButton_right->sizePolicy().hasHeightForWidth());
        pushButton_right->setSizePolicy(sizePolicy);
        pushButton_right->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_right, 6, 3, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_0, 6, 1, 1, 1);

        pushButton_Close = new QPushButton(centralWidget);
        pushButton_Close->setObjectName("pushButton_Close");
        sizePolicy.setHeightForWidth(pushButton_Close->sizePolicy().hasHeightForWidth());
        pushButton_Close->setSizePolicy(sizePolicy);
        pushButton_Close->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_Close, 0, 4, 1, 1);

        pushButton_divid = new QPushButton(centralWidget);
        pushButton_divid->setObjectName("pushButton_divid");
        sizePolicy.setHeightForWidth(pushButton_divid->sizePolicy().hasHeightForWidth());
        pushButton_divid->setSizePolicy(sizePolicy);
        pushButton_divid->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_divid, 5, 4, 1, 1);

        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName("pushButton_minus");
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_minus, 3, 4, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_5, 4, 1, 1, 1);

        pushButton_point = new QPushButton(centralWidget);
        pushButton_point->setObjectName("pushButton_point");
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);
        pushButton_point->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_point, 1, 1, 1, 1);

        pushButton_mutiple = new QPushButton(centralWidget);
        pushButton_mutiple->setObjectName("pushButton_mutiple");
        sizePolicy.setHeightForWidth(pushButton_mutiple->sizePolicy().hasHeightForWidth());
        pushButton_mutiple->setSizePolicy(sizePolicy);
        pushButton_mutiple->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_mutiple, 4, 4, 1, 1);

        pushButton_Clear = new QPushButton(centralWidget);
        pushButton_Clear->setObjectName("pushButton_Clear");
        sizePolicy.setHeightForWidth(pushButton_Clear->sizePolicy().hasHeightForWidth());
        pushButton_Clear->setSizePolicy(sizePolicy);
        pushButton_Clear->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_Clear, 1, 0, 1, 1);

        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName("pushButton_equal");
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_equal, 6, 4, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        pushButton_back = new QPushButton(centralWidget);
        pushButton_back->setObjectName("pushButton_back");
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);
        pushButton_back->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_back, 1, 3, 1, 1);

        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName("pushButton_left");
        sizePolicy.setHeightForWidth(pushButton_left->sizePolicy().hasHeightForWidth());
        pushButton_left->setSizePolicy(sizePolicy);
        pushButton_left->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_left, 6, 0, 1, 1);

        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName("pushButton_plus");
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_plus, 1, 4, 1, 1);

        pushButton_or = new QPushButton(centralWidget);
        pushButton_or->setObjectName("pushButton_or");
        sizePolicy.setHeightForWidth(pushButton_or->sizePolicy().hasHeightForWidth());
        pushButton_or->setSizePolicy(sizePolicy);
        pushButton_or->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_or, 0, 1, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_1, 5, 0, 1, 1);

        pushButton_no = new QPushButton(centralWidget);
        pushButton_no->setObjectName("pushButton_no");
        sizePolicy.setHeightForWidth(pushButton_no->sizePolicy().hasHeightForWidth());
        pushButton_no->setSizePolicy(sizePolicy);
        pushButton_no->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_no, 0, 3, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_6, 4, 3, 1, 1);

        pushButton_and = new QPushButton(centralWidget);
        pushButton_and->setObjectName("pushButton_and");
        sizePolicy.setHeightForWidth(pushButton_and->sizePolicy().hasHeightForWidth());
        pushButton_and->setSizePolicy(sizePolicy);
        pushButton_and->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_and, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(pushButton_3, 5, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 392, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_right->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_divid->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_mutiple->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        pushButton_left->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_or->setText(QCoreApplication::translate("MainWindow", "||", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_no->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_and->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
