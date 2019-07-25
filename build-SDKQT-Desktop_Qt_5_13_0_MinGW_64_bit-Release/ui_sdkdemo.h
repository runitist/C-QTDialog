/********************************************************************************
** Form generated from reading UI file 'sdkdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDKDEMO_H
#define UI_SDKDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SDKDemo
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *imgtxt1;
    QLabel *imgtxt2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *pictureconsole;
    QPushButton *pictureinit;
    QComboBox *picmodcombo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btestbtn;
    QPushButton *ptestbtn;
    QPushButton *extestbtn;
    QWidget *tab_2;
    QPushButton *caminit;
    QComboBox *cammodcombo;
    QTextBrowser *camconsole;
    QPushButton *camtestbtn;
    QPushButton *capturebtn;
    QPushButton *assignbtn;
    QLineEdit *capturetext;
    QLabel *camimg;
    QLabel *captureimg;

    void setupUi(QDialog *SDKDemo)
    {
        if (SDKDemo->objectName().isEmpty())
            SDKDemo->setObjectName(QString::fromUtf8("SDKDemo"));
        SDKDemo->setEnabled(true);
        SDKDemo->resize(408, 554);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("SDKDemo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        SDKDemo->setWindowIcon(icon);
        SDKDemo->setSizeGripEnabled(false);
        tabWidget = new QTabWidget(SDKDemo);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 411, 561));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_1 = new QLabel(tab);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(15, 60, 170, 226));
        label_1->setAutoFillBackground(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(215, 60, 170, 226));
        label_2->setAutoFillBackground(true);
        imgtxt1 = new QLabel(tab);
        imgtxt1->setObjectName(QString::fromUtf8("imgtxt1"));
        imgtxt1->setGeometry(QRect(15, 300, 191, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        imgtxt1->setFont(font);
        imgtxt2 = new QLabel(tab);
        imgtxt2->setObjectName(QString::fromUtf8("imgtxt2"));
        imgtxt2->setGeometry(QRect(215, 300, 191, 16));
        imgtxt2->setFont(font);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 330, 81, 21));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 330, 81, 21));
        pictureconsole = new QTextBrowser(tab);
        pictureconsole->setObjectName(QString::fromUtf8("pictureconsole"));
        pictureconsole->setGeometry(QRect(10, 390, 385, 131));
        pictureinit = new QPushButton(tab);
        pictureinit->setObjectName(QString::fromUtf8("pictureinit"));
        pictureinit->setGeometry(QRect(295, 20, 90, 23));
        picmodcombo = new QComboBox(tab);
        picmodcombo->setObjectName(QString::fromUtf8("picmodcombo"));
        picmodcombo->setGeometry(QRect(15, 20, 170, 22));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 360, 381, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btestbtn = new QPushButton(layoutWidget);
        btestbtn->setObjectName(QString::fromUtf8("btestbtn"));

        horizontalLayout->addWidget(btestbtn);

        ptestbtn = new QPushButton(layoutWidget);
        ptestbtn->setObjectName(QString::fromUtf8("ptestbtn"));

        horizontalLayout->addWidget(ptestbtn);

        extestbtn = new QPushButton(layoutWidget);
        extestbtn->setObjectName(QString::fromUtf8("extestbtn"));

        horizontalLayout->addWidget(extestbtn);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        caminit = new QPushButton(tab_2);
        caminit->setObjectName(QString::fromUtf8("caminit"));
        caminit->setGeometry(QRect(295, 20, 90, 23));
        cammodcombo = new QComboBox(tab_2);
        cammodcombo->setObjectName(QString::fromUtf8("cammodcombo"));
        cammodcombo->setGeometry(QRect(15, 20, 170, 22));
        camconsole = new QTextBrowser(tab_2);
        camconsole->setObjectName(QString::fromUtf8("camconsole"));
        camconsole->setGeometry(QRect(10, 390, 385, 131));
        camtestbtn = new QPushButton(tab_2);
        camtestbtn->setObjectName(QString::fromUtf8("camtestbtn"));
        camtestbtn->setGeometry(QRect(200, 20, 75, 23));
        capturebtn = new QPushButton(tab_2);
        capturebtn->setObjectName(QString::fromUtf8("capturebtn"));
        capturebtn->setGeometry(QRect(10, 360, 75, 23));
        assignbtn = new QPushButton(tab_2);
        assignbtn->setObjectName(QString::fromUtf8("assignbtn"));
        assignbtn->setGeometry(QRect(320, 360, 75, 23));
        capturetext = new QLineEdit(tab_2);
        capturetext->setObjectName(QString::fromUtf8("capturetext"));
        capturetext->setGeometry(QRect(90, 360, 221, 20));
        camimg = new QLabel(tab_2);
        camimg->setObjectName(QString::fromUtf8("camimg"));
        camimg->setGeometry(QRect(10, 50, 381, 301));
        camimg->setAutoFillBackground(true);
        captureimg = new QLabel(tab_2);
        captureimg->setObjectName(QString::fromUtf8("captureimg"));
        captureimg->setGeometry(QRect(270, 260, 121, 91));
        captureimg->setAutoFillBackground(true);
        tabWidget->addTab(tab_2, QString());
        camimg->raise();
        caminit->raise();
        cammodcombo->raise();
        camconsole->raise();
        camtestbtn->raise();
        capturebtn->raise();
        assignbtn->raise();
        capturetext->raise();
        captureimg->raise();

        retranslateUi(SDKDemo);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SDKDemo);
    } // setupUi

    void retranslateUi(QDialog *SDKDemo)
    {
        SDKDemo->setWindowTitle(QCoreApplication::translate("SDKDemo", "SDKDemo", nullptr));
        label_1->setText(QString());
        label_2->setText(QString());
        imgtxt1->setText(QCoreApplication::translate("SDKDemo", "TextLabel", nullptr));
        imgtxt2->setText(QCoreApplication::translate("SDKDemo", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("SDKDemo", "\354\202\254\354\247\2041", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SDKDemo", "\354\202\254\354\247\2042", nullptr));
        pictureinit->setText(QCoreApplication::translate("SDKDemo", "Init", nullptr));
        btestbtn->setText(QCoreApplication::translate("SDKDemo", "\352\270\260\353\263\270 \355\205\214\354\212\244\355\212\270", nullptr));
        ptestbtn->setText(QCoreApplication::translate("SDKDemo", "\354\204\261\353\212\245 \355\205\214\354\212\244\355\212\270", nullptr));
        extestbtn->setText(QCoreApplication::translate("SDKDemo", "\355\231\225\354\236\245 \355\205\214\354\212\244\355\212\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SDKDemo", "Picture", nullptr));
        caminit->setText(QCoreApplication::translate("SDKDemo", "Init", nullptr));
        camtestbtn->setText(QCoreApplication::translate("SDKDemo", "CAM \355\205\214\354\212\244\355\212\270", nullptr));
        capturebtn->setText(QCoreApplication::translate("SDKDemo", "\354\272\241\354\263\220", nullptr));
        assignbtn->setText(QCoreApplication::translate("SDKDemo", "\353\223\261\353\241\235", nullptr));
        camimg->setText(QCoreApplication::translate("SDKDemo", "CAM", nullptr));
        captureimg->setText(QCoreApplication::translate("SDKDemo", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SDKDemo", "CAM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SDKDemo: public Ui_SDKDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDKDEMO_H
