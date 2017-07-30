/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *StopBtn;
    QPushButton *StartBtn;
    QPushButton *AddBtn;
    QPushButton *DelBtn;
    QPushButton *UpBtn;
    QPushButton *DownBtn;
    QListView *id_list;
    QLineEdit *appid;
    QLabel *label;
    QSpinBox *DurationSet;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *chk_shuffle;
    QCheckBox *chk_loop;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(406, 312);
        StopBtn = new QPushButton(Widget);
        StopBtn->setObjectName(QStringLiteral("StopBtn"));
        StopBtn->setGeometry(QRect(320, 70, 75, 23));
        StartBtn = new QPushButton(Widget);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));
        StartBtn->setGeometry(QRect(240, 70, 75, 23));
        AddBtn = new QPushButton(Widget);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));
        AddBtn->setGeometry(QRect(10, 100, 75, 23));
        DelBtn = new QPushButton(Widget);
        DelBtn->setObjectName(QStringLiteral("DelBtn"));
        DelBtn->setGeometry(QRect(10, 130, 75, 23));
        UpBtn = new QPushButton(Widget);
        UpBtn->setObjectName(QStringLiteral("UpBtn"));
        UpBtn->setGeometry(QRect(10, 160, 75, 23));
        DownBtn = new QPushButton(Widget);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));
        DownBtn->setGeometry(QRect(10, 190, 75, 23));
        id_list = new QListView(Widget);
        id_list->setObjectName(QStringLiteral("id_list"));
        id_list->setGeometry(QRect(95, 100, 301, 192));
        appid = new QLineEdit(Widget);
        appid->setObjectName(QStringLiteral("appid"));
        appid->setGeometry(QRect(10, 70, 113, 20));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 71, 16));
        DurationSet = new QSpinBox(Widget);
        DurationSet->setObjectName(QStringLiteral("DurationSet"));
        DurationSet->setGeometry(QRect(10, 240, 42, 22));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 220, 71, 16));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 250, 47, 13));
        chk_shuffle = new QCheckBox(Widget);
        chk_shuffle->setObjectName(QStringLiteral("chk_shuffle"));
        chk_shuffle->setGeometry(QRect(10, 270, 70, 17));
        chk_shuffle->setCheckable(false);
        chk_loop = new QCheckBox(Widget);
        chk_loop->setObjectName(QStringLiteral("chk_loop"));
        chk_loop->setGeometry(QRect(10, 290, 70, 17));
        chk_loop->setCheckable(false);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        StopBtn->setText(QApplication::translate("Widget", "Stop Idling", Q_NULLPTR));
        StartBtn->setText(QApplication::translate("Widget", "Start Idling", Q_NULLPTR));
        AddBtn->setText(QApplication::translate("Widget", "Add", Q_NULLPTR));
        DelBtn->setText(QApplication::translate("Widget", "Remove", Q_NULLPTR));
        UpBtn->setText(QApplication::translate("Widget", "Move Up", Q_NULLPTR));
        DownBtn->setText(QApplication::translate("Widget", "Move Down", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "Steam App ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "Idle Each for", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "Hours", Q_NULLPTR));
        chk_shuffle->setText(QApplication::translate("Widget", "Shuffle", Q_NULLPTR));
        chk_loop->setText(QApplication::translate("Widget", "Loop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
