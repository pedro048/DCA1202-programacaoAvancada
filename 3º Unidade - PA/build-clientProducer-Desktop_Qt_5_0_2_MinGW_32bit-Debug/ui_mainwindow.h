/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QAction *actionConectar;
    QAction *actionDesconectar;
    QAction *actionPortugu_s;
    QAction *actionIngl_s;
    QAction *actionLimpar_dados;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *leditEndereco;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnDisconnect;
    QHBoxLayout *horizontalLayout_2;
    QSlider *hsliderMin;
    QVBoxLayout *verticalLayout;
    QLabel *lblMin;
    QLCDNumber *lcdMin;
    QHBoxLayout *horizontalLayout_3;
    QSlider *hsliderMax;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblMax;
    QLCDNumber *lcdMax;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSlider *hsliderTiming;
    QLabel *lblTiming;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QTextBrowser *txtBoxDados;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuAjuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(621, 378);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionConectar = new QAction(MainWindow);
        actionConectar->setObjectName(QStringLiteral("actionConectar"));
        actionDesconectar = new QAction(MainWindow);
        actionDesconectar->setObjectName(QStringLiteral("actionDesconectar"));
        actionPortugu_s = new QAction(MainWindow);
        actionPortugu_s->setObjectName(QStringLiteral("actionPortugu_s"));
        actionIngl_s = new QAction(MainWindow);
        actionIngl_s->setObjectName(QStringLiteral("actionIngl_s"));
        actionLimpar_dados = new QAction(MainWindow);
        actionLimpar_dados->setObjectName(QStringLiteral("actionLimpar_dados"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_6 = new QHBoxLayout(centralWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        leditEndereco = new QLineEdit(centralWidget);
        leditEndereco->setObjectName(QStringLiteral("leditEndereco"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        leditEndereco->setFont(font);
        leditEndereco->setFocusPolicy(Qt::ClickFocus);
        leditEndereco->setMaxLength(15);
        leditEndereco->setDragEnabled(false);
        //leditEndereco->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(leditEndereco);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConnect = new QPushButton(centralWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/arquivos/imagens/conectar"), QSize(), QIcon::Normal, QIcon::Off);
        btnConnect->setIcon(icon);
        btnConnect->setCheckable(false);
        btnConnect->setChecked(false);
        btnConnect->setDefault(true);
        btnConnect->setFlat(false);

        horizontalLayout->addWidget(btnConnect);

        btnDisconnect = new QPushButton(centralWidget);
        btnDisconnect->setObjectName(QStringLiteral("btnDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/arquivos/imagens/desconectar"), QSize(), QIcon::Normal, QIcon::Off);
        btnDisconnect->setIcon(icon1);

        horizontalLayout->addWidget(btnDisconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        hsliderMin = new QSlider(centralWidget);
        hsliderMin->setObjectName(QStringLiteral("hsliderMin"));
        hsliderMin->setOrientation(Qt::Horizontal);
        hsliderMin->setInvertedAppearance(false);
        hsliderMin->setInvertedControls(false);
        hsliderMin->setTickPosition(QSlider::TicksBelow);
        hsliderMin->setTickInterval(0);

        horizontalLayout_2->addWidget(hsliderMin);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblMin = new QLabel(centralWidget);
        lblMin->setObjectName(QStringLiteral("lblMin"));

        verticalLayout->addWidget(lblMin);

        lcdMin = new QLCDNumber(centralWidget);
        lcdMin->setObjectName(QStringLiteral("lcdMin"));

        verticalLayout->addWidget(lcdMin);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        hsliderMax = new QSlider(centralWidget);
        hsliderMax->setObjectName(QStringLiteral("hsliderMax"));
        hsliderMax->setMinimum(1);
        hsliderMax->setSliderPosition(1);
        hsliderMax->setOrientation(Qt::Horizontal);
        hsliderMax->setTickPosition(QSlider::TicksBelow);
        hsliderMax->setTickInterval(0);

        horizontalLayout_3->addWidget(hsliderMax);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblMax = new QLabel(centralWidget);
        lblMax->setObjectName(QStringLiteral("lblMax"));

        verticalLayout_2->addWidget(lblMax);

        lcdMax = new QLCDNumber(centralWidget);
        lcdMax->setObjectName(QStringLiteral("lcdMax"));
        lcdMax->setProperty("intValue", QVariant(1));

        verticalLayout_2->addWidget(lcdMax);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        hsliderTiming = new QSlider(centralWidget);
        hsliderTiming->setObjectName(QStringLiteral("hsliderTiming"));
        hsliderTiming->setMaximum(10);
        hsliderTiming->setPageStep(1);
        hsliderTiming->setValue(1);
        hsliderTiming->setSliderPosition(1);
        hsliderTiming->setOrientation(Qt::Horizontal);
        hsliderTiming->setTickPosition(QSlider::TicksBelow);
        hsliderTiming->setTickInterval(1);

        horizontalLayout_4->addWidget(hsliderTiming);

        lblTiming = new QLabel(centralWidget);
        lblTiming->setObjectName(QStringLiteral("lblTiming"));

        horizontalLayout_4->addWidget(lblTiming);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        horizontalLayout_5->addWidget(btnStart);

        btnStop = new QPushButton(centralWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        horizontalLayout_5->addWidget(btnStop);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        txtBoxDados = new QTextBrowser(centralWidget);
        txtBoxDados->setObjectName(QStringLiteral("txtBoxDados"));
        txtBoxDados->setFrameShape(QFrame::StyledPanel);
        txtBoxDados->setFrameShadow(QFrame::Raised);
        txtBoxDados->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        txtBoxDados->setOverwriteMode(false);

        horizontalLayout_6->addWidget(txtBoxDados);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 621, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionConectar);
        menuArquivo->addAction(actionDesconectar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionLimpar_dados);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuAjuda->addAction(actionPortugu_s);
        menuAjuda->addAction(actionIngl_s);

        retranslateUi(MainWindow);
        QObject::connect(hsliderMin, SIGNAL(valueChanged(int)), lcdMin, SLOT(display(int)));
        QObject::connect(hsliderMax, SIGNAL(valueChanged(int)), lcdMax, SLOT(display(int)));
        QObject::connect(hsliderTiming, SIGNAL(valueChanged(int)), lblTiming, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", 0));
        actionConectar->setText(QApplication::translate("MainWindow", "Conectar", 0));
        actionDesconectar->setText(QApplication::translate("MainWindow", "Desconectar", 0));
        actionPortugu_s->setText(QApplication::translate("MainWindow", "Portugu\303\252s", 0));
        actionIngl_s->setText(QApplication::translate("MainWindow", "English", 0));
        actionLimpar_dados->setText(QApplication::translate("MainWindow", "Limpar dados", 0));
        leditEndereco->setText(QApplication::translate("MainWindow", "Endere\303\247o IP...", 0));
        btnConnect->setText(QApplication::translate("MainWindow", "Conectar", 0));
        btnDisconnect->setText(QApplication::translate("MainWindow", "Desconectar", 0));
        lblMin->setText(QApplication::translate("MainWindow", "Min", 0));
        lblMax->setText(QApplication::translate("MainWindow", "Max", 0));
        label->setText(QApplication::translate("MainWindow", "Intervalo", 0));
        lblTiming->setText(QApplication::translate("MainWindow", "1", 0));
        btnStart->setText(QApplication::translate("MainWindow", "Iniciar", 0));
        btnStop->setText(QApplication::translate("MainWindow", "Parar", 0));
        txtBoxDados->setDocumentTitle(QApplication::translate("MainWindow", "Sa\303\255da", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Op\303\247\303\265es", 0));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Idioma", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
