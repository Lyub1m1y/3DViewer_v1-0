/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *hz;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_19;
    QPushButton *pushButton_screenshot;
    QPushButton *pushButton_gif;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_20;
    QLabel *label_42;
    QComboBox *projection_type;
    QGroupBox *groupBox_22;
    QPushButton *pushButton_select_name;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_23;
    QGridLayout *gridLayout_15;
    QToolBox *settings_box;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QScrollBar *horizontalScrollBar_bgr_R;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_24;
    QScrollBar *horizontalScrollBar_bgr_B;
    QLabel *label_25;
    QLabel *label_26;
    QScrollBar *horizontalScrollBar_bgr_G;
    QWidget *page_2;
    QGridLayout *gridLayout_8;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_4;
    QScrollBar *horizontalScrollBar_edges_R;
    QRadioButton *radioButton_stipple;
    QRadioButton *radioButton_line;
    QLabel *label_27;
    QScrollBar *horizontalScrollBar_edges_G;
    QSpinBox *spinBox_5;
    QLabel *label_28;
    QScrollBar *horizontalScrollBar_edges_B;
    QLabel *label_29;
    QLabel *label_48;
    QSpinBox *spinBox_edges_size;
    QWidget *page_3;
    QGridLayout *gridLayout_9;
    QSpinBox *spinBox_7;
    QScrollBar *horizontalScrollBar_vertexes_G;
    QLabel *label_30;
    QRadioButton *radioButton_circles;
    QSpinBox *spinBox_9;
    QLabel *label_31;
    QScrollBar *horizontalScrollBar_vertexes_R;
    QScrollBar *horizontalScrollBar_vertexes_B;
    QLabel *label_32;
    QRadioButton *radioButton_quads;
    QSpinBox *spinBox_8;
    QRadioButton *radioButton_norm;
    QLabel *label_49;
    QSpinBox *spinBox_vertexes_size;
    QLabel *label_22;
    QGroupBox *groupBox_24;
    QGridLayout *gridLayout_16;
    QToolBox *toolBox_2;
    QWidget *page_4;
    QGridLayout *gridLayout_10;
    QLabel *label_33;
    QScrollBar *horizontalScrollBar_mv_y;
    QLabel *label_34;
    QScrollBar *horizontalScrollBar_mv_z;
    QLabel *label_35;
    QScrollBar *horizontalScrollBar_mv_x;
    QWidget *page_5;
    QGridLayout *gridLayout_17;
    QLabel *label_39;
    QScrollBar *horizontalScrollBar_rot_x;
    QLabel *label_40;
    QScrollBar *horizontalScrollBar_rot_y;
    QLabel *label_41;
    QScrollBar *horizontalScrollBar_rot_z;
    QPushButton *pushButton_save_settings;
    QPushButton *pushButton_reset;
    QLabel *label_23;
    QGroupBox *groupBox;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_3;
    QLabel *label_20;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_19;
    QLabel *label_info_e;
    QLabel *label_info_v;
    QLabel *label_info_p;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QScrollBar *verticalScrollBar;
    QGroupBox *groupBox_28;
    QGridLayout *gridLayout_21;
    QPushButton *pushButton_sc_z_plus;
    QPushButton *pushButton_sc_y_minus;
    QLabel *label_44;
    QLabel *label_43;
    QPushButton *pushButton_sc_y_plus;
    QPushButton *pushButton_sc_x_minus;
    QLabel *label_46;
    QPushButton *pushButton_sc_x_plus;
    QPushButton *pushButton_sc_z_minus;
    QLabel *label_45;
    QDoubleSpinBox *doubleSpinBox_sc_value;
    QLabel *label_47;
    QLabel *label_21;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1600, 1000);
        MainWindow->setMinimumSize(QSize(1600, 1000));
        MainWindow->setMaximumSize(QSize(1600, 1000));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background: #212121;\n"
"}\n"
"\n"
"QToolBox::tab {\n"
" background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"    border-radius: 5px;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QToolBox::tab:selected { \n"
"    font: italic;\n"
"    color: white;\n"
"    background:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}\n"
"QGroupBox {\n"
"	background: #292929;\n"
"	border: 2px solid #292929;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QGroupBox#groupBox_10,\n"
"QGroupBox#groupBox_9,\n"
"QGroupBox#groupBox_11, \n"
"QGroupBox#groupBox_2 {\n"
"	background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #474747, stop:0.995098 #949494);\n"
"	border: none;\n"
"}\n"
"\n"
"QGroupBox#groupBox_4,\n"
"QGrou"
                        "pBox#groupBox_5,\n"
"QGroupBox#groupBox_7,\n"
"QGroupBox#groupBox_8{\n"
"	border: 2px solid #302D3D;\n"
"    border-radius: 5px;\n"
"	background: #302D3D;\n"
"}\n"
"\n"
"QToolBox QScrollArea>QWidget>QWidget\n"
"{\n"
"  	background: #302D3D;\n"
"}\n"
"QToolBox\n"
"{\n"
"  	background: #302D3D;\n"
"}\n"
"\n"
"QDoubleSpinBox,\n"
"QSpinBox {\n"
"	height: 25px;\n"
" 	background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"	color: #C5D0E6;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed,\n"
"QSpinBox::down-button:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}\n"
"QDoubleSpinBox::up-button:pressed,\n"
"QSpinBox::up-button:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0"
                        ", x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}\n"
"\n"
""));
        hz = new QLabel(MainWindow);
        hz->setObjectName(QString::fromUtf8("hz"));
        hz->setGeometry(QRect(200, 790, 51, 20));
        gridLayout = new QGridLayout(MainWindow);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(15, 15, 15, 15);
        groupBox_6 = new QGroupBox(MainWindow);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 50));
        groupBox_6->setMaximumSize(QSize(1600, 16777215));
        groupBox_6->setStyleSheet(QString::fromUtf8(""));
        gridLayout_18 = new QGridLayout(groupBox_6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setHorizontalSpacing(300);
        gridLayout_18->setVerticalSpacing(0);
        gridLayout_18->setContentsMargins(20, 0, 20, 0);
        groupBox_9 = new QGroupBox(groupBox_6);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setStyleSheet(QString::fromUtf8(""));
        gridLayout_19 = new QGridLayout(groupBox_9);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setHorizontalSpacing(20);
        gridLayout_19->setVerticalSpacing(0);
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        pushButton_screenshot = new QPushButton(groupBox_9);
        pushButton_screenshot->setObjectName(QString::fromUtf8("pushButton_screenshot"));
        pushButton_screenshot->setMinimumSize(QSize(80, 10));
        pushButton_screenshot->setMaximumSize(QSize(16777215, 25));
        pushButton_screenshot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
" 	background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"    min-width: 80px;\n"
"color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}"));

        gridLayout_19->addWidget(pushButton_screenshot, 0, 0, 1, 1);

        pushButton_gif = new QPushButton(groupBox_9);
        pushButton_gif->setObjectName(QString::fromUtf8("pushButton_gif"));
        pushButton_gif->setMinimumSize(QSize(80, 25));
        pushButton_gif->setMaximumSize(QSize(16777215, 25));
        pushButton_gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"	 background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"    min-width: 80px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}"));

        gridLayout_19->addWidget(pushButton_gif, 0, 1, 1, 1);


        gridLayout_18->addWidget(groupBox_9, 0, 1, 1, 1);

        groupBox_10 = new QGroupBox(groupBox_6);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setStyleSheet(QString::fromUtf8(""));
        gridLayout_20 = new QGridLayout(groupBox_10);
        gridLayout_20->setSpacing(0);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(groupBox_10);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_20->addWidget(label_42, 0, 0, 1, 1);

        projection_type = new QComboBox(groupBox_10);
        projection_type->addItem(QString());
        projection_type->addItem(QString());
        projection_type->setObjectName(QString::fromUtf8("projection_type"));
        projection_type->setStyleSheet(QString::fromUtf8(""));

        gridLayout_20->addWidget(projection_type, 0, 1, 1, 1);


        gridLayout_18->addWidget(groupBox_10, 0, 0, 1, 1);

        groupBox_22 = new QGroupBox(groupBox_6);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        groupBox_22->setStyleSheet(QString::fromUtf8("background:blue;"));
        pushButton_select_name = new QPushButton(groupBox_22);
        pushButton_select_name->setObjectName(QString::fromUtf8("pushButton_select_name"));
        pushButton_select_name->setGeometry(QRect(20, 10, 141, 24));

        gridLayout_18->addWidget(groupBox_22, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_6, 0, 0, 1, 3);

        groupBox_5 = new QGroupBox(MainWindow);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        groupBox_5->setMaximumSize(QSize(300, 950));
        groupBox_5->setStyleSheet(QString::fromUtf8(""));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(10);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        groupBox_23 = new QGroupBox(groupBox_5);
        groupBox_23->setObjectName(QString::fromUtf8("groupBox_23"));
        groupBox_23->setMinimumSize(QSize(0, 400));
        groupBox_23->setMaximumSize(QSize(16777215, 400));
        groupBox_23->setStyleSheet(QString::fromUtf8(""));
        gridLayout_15 = new QGridLayout(groupBox_23);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        settings_box = new QToolBox(groupBox_23);
        settings_box->setObjectName(QString::fromUtf8("settings_box"));
        settings_box->setMinimumSize(QSize(0, 390));
        settings_box->setMaximumSize(QSize(370, 390));
        settings_box->setAutoFillBackground(false);
        settings_box->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 282, 288));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalScrollBar_bgr_R = new QScrollBar(page);
        horizontalScrollBar_bgr_R->setObjectName(QString::fromUtf8("horizontalScrollBar_bgr_R"));
        horizontalScrollBar_bgr_R->setStyleSheet(QString::fromUtf8(""));
        horizontalScrollBar_bgr_R->setMinimum(0);
        horizontalScrollBar_bgr_R->setMaximum(255);
        horizontalScrollBar_bgr_R->setPageStep(1);
        horizontalScrollBar_bgr_R->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalScrollBar_bgr_R, 1, 0, 1, 3);

        spinBox_3 = new QSpinBox(page);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout_7->addWidget(spinBox_3, 4, 1, 1, 1);

        spinBox = new QSpinBox(page);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_7->addWidget(spinBox, 0, 1, 1, 1);

        spinBox_2 = new QSpinBox(page);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout_7->addWidget(spinBox_2, 2, 1, 1, 1);

        label_24 = new QLabel(page);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 4, 0, 1, 1);

        horizontalScrollBar_bgr_B = new QScrollBar(page);
        horizontalScrollBar_bgr_B->setObjectName(QString::fromUtf8("horizontalScrollBar_bgr_B"));
        horizontalScrollBar_bgr_B->setMinimum(0);
        horizontalScrollBar_bgr_B->setMaximum(255);
        horizontalScrollBar_bgr_B->setPageStep(1);
        horizontalScrollBar_bgr_B->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalScrollBar_bgr_B, 5, 0, 1, 3);

        label_25 = new QLabel(page);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_7->addWidget(label_25, 2, 0, 1, 1);

        label_26 = new QLabel(page);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_7->addWidget(label_26, 0, 0, 1, 1);

        horizontalScrollBar_bgr_G = new QScrollBar(page);
        horizontalScrollBar_bgr_G->setObjectName(QString::fromUtf8("horizontalScrollBar_bgr_G"));
        horizontalScrollBar_bgr_G->setMinimum(0);
        horizontalScrollBar_bgr_G->setMaximum(255);
        horizontalScrollBar_bgr_G->setPageStep(1);
        horizontalScrollBar_bgr_G->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalScrollBar_bgr_G, 3, 0, 1, 3);

        settings_box->addItem(page, QString::fromUtf8("Background color"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 282, 288));
        gridLayout_8 = new QGridLayout(page_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        spinBox_6 = new QSpinBox(page_2);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));

        gridLayout_8->addWidget(spinBox_6, 8, 1, 1, 1);

        spinBox_4 = new QSpinBox(page_2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout_8->addWidget(spinBox_4, 4, 1, 1, 1);

        horizontalScrollBar_edges_R = new QScrollBar(page_2);
        horizontalScrollBar_edges_R->setObjectName(QString::fromUtf8("horizontalScrollBar_edges_R"));
        horizontalScrollBar_edges_R->setMinimum(0);
        horizontalScrollBar_edges_R->setMaximum(255);
        horizontalScrollBar_edges_R->setPageStep(1);
        horizontalScrollBar_edges_R->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalScrollBar_edges_R, 5, 0, 1, 3);

        radioButton_stipple = new QRadioButton(page_2);
        radioButton_stipple->setObjectName(QString::fromUtf8("radioButton_stipple"));

        gridLayout_8->addWidget(radioButton_stipple, 0, 1, 1, 1);

        radioButton_line = new QRadioButton(page_2);
        radioButton_line->setObjectName(QString::fromUtf8("radioButton_line"));
        radioButton_line->setChecked(true);

        gridLayout_8->addWidget(radioButton_line, 0, 0, 1, 1);

        label_27 = new QLabel(page_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_8->addWidget(label_27, 4, 0, 1, 1);

        horizontalScrollBar_edges_G = new QScrollBar(page_2);
        horizontalScrollBar_edges_G->setObjectName(QString::fromUtf8("horizontalScrollBar_edges_G"));
        horizontalScrollBar_edges_G->setMinimum(0);
        horizontalScrollBar_edges_G->setMaximum(255);
        horizontalScrollBar_edges_G->setPageStep(1);
        horizontalScrollBar_edges_G->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalScrollBar_edges_G, 7, 0, 1, 3);

        spinBox_5 = new QSpinBox(page_2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout_8->addWidget(spinBox_5, 6, 1, 1, 1);

        label_28 = new QLabel(page_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_8->addWidget(label_28, 6, 0, 1, 1);

        horizontalScrollBar_edges_B = new QScrollBar(page_2);
        horizontalScrollBar_edges_B->setObjectName(QString::fromUtf8("horizontalScrollBar_edges_B"));
        horizontalScrollBar_edges_B->setMinimum(0);
        horizontalScrollBar_edges_B->setMaximum(255);
        horizontalScrollBar_edges_B->setPageStep(1);
        horizontalScrollBar_edges_B->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalScrollBar_edges_B, 9, 0, 1, 3);

        label_29 = new QLabel(page_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_8->addWidget(label_29, 8, 0, 1, 1);

        label_48 = new QLabel(page_2);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_8->addWidget(label_48, 10, 0, 1, 1);

        spinBox_edges_size = new QSpinBox(page_2);
        spinBox_edges_size->setObjectName(QString::fromUtf8("spinBox_edges_size"));
        spinBox_edges_size->setMinimum(1);

        gridLayout_8->addWidget(spinBox_edges_size, 10, 1, 1, 1);

        settings_box->addItem(page_2, QString::fromUtf8("Lines"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 282, 288));
        gridLayout_9 = new QGridLayout(page_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        spinBox_7 = new QSpinBox(page_3);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));

        gridLayout_9->addWidget(spinBox_7, 1, 1, 1, 1);

        horizontalScrollBar_vertexes_G = new QScrollBar(page_3);
        horizontalScrollBar_vertexes_G->setObjectName(QString::fromUtf8("horizontalScrollBar_vertexes_G"));
        horizontalScrollBar_vertexes_G->setMinimum(0);
        horizontalScrollBar_vertexes_G->setMaximum(255);
        horizontalScrollBar_vertexes_G->setPageStep(1);
        horizontalScrollBar_vertexes_G->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalScrollBar_vertexes_G, 4, 0, 1, 3);

        label_30 = new QLabel(page_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_9->addWidget(label_30, 3, 0, 1, 1);

        radioButton_circles = new QRadioButton(page_3);
        radioButton_circles->setObjectName(QString::fromUtf8("radioButton_circles"));
        radioButton_circles->setChecked(false);

        gridLayout_9->addWidget(radioButton_circles, 0, 2, 1, 1);

        spinBox_9 = new QSpinBox(page_3);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));

        gridLayout_9->addWidget(spinBox_9, 5, 1, 1, 1);

        label_31 = new QLabel(page_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_9->addWidget(label_31, 1, 0, 1, 1);

        horizontalScrollBar_vertexes_R = new QScrollBar(page_3);
        horizontalScrollBar_vertexes_R->setObjectName(QString::fromUtf8("horizontalScrollBar_vertexes_R"));
        horizontalScrollBar_vertexes_R->setMinimum(0);
        horizontalScrollBar_vertexes_R->setMaximum(255);
        horizontalScrollBar_vertexes_R->setPageStep(1);
        horizontalScrollBar_vertexes_R->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalScrollBar_vertexes_R, 2, 0, 1, 3);

        horizontalScrollBar_vertexes_B = new QScrollBar(page_3);
        horizontalScrollBar_vertexes_B->setObjectName(QString::fromUtf8("horizontalScrollBar_vertexes_B"));
        horizontalScrollBar_vertexes_B->setMinimum(0);
        horizontalScrollBar_vertexes_B->setMaximum(255);
        horizontalScrollBar_vertexes_B->setPageStep(1);
        horizontalScrollBar_vertexes_B->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalScrollBar_vertexes_B, 6, 0, 1, 3);

        label_32 = new QLabel(page_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_9->addWidget(label_32, 5, 0, 1, 1);

        radioButton_quads = new QRadioButton(page_3);
        radioButton_quads->setObjectName(QString::fromUtf8("radioButton_quads"));
        radioButton_quads->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(radioButton_quads, 0, 1, 1, 1);

        spinBox_8 = new QSpinBox(page_3);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));

        gridLayout_9->addWidget(spinBox_8, 3, 1, 1, 1);

        radioButton_norm = new QRadioButton(page_3);
        radioButton_norm->setObjectName(QString::fromUtf8("radioButton_norm"));
        radioButton_norm->setChecked(true);

        gridLayout_9->addWidget(radioButton_norm, 0, 0, 1, 1);

        label_49 = new QLabel(page_3);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_9->addWidget(label_49, 7, 0, 1, 1);

        spinBox_vertexes_size = new QSpinBox(page_3);
        spinBox_vertexes_size->setObjectName(QString::fromUtf8("spinBox_vertexes_size"));
        spinBox_vertexes_size->setMinimum(1);

        gridLayout_9->addWidget(spinBox_vertexes_size, 7, 1, 1, 1);

        settings_box->addItem(page_3, QString::fromUtf8("Vertexes"));

        gridLayout_15->addWidget(settings_box, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_23, 1, 0, 1, 2);

        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(0, 40));
        label_22->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(18);
        label_22->setFont(font);

        gridLayout_6->addWidget(label_22, 2, 0, 1, 1);

        groupBox_24 = new QGroupBox(groupBox_5);
        groupBox_24->setObjectName(QString::fromUtf8("groupBox_24"));
        groupBox_24->setMinimumSize(QSize(0, 320));
        groupBox_24->setMaximumSize(QSize(16777215, 320));
        groupBox_24->setStyleSheet(QString::fromUtf8(""));
        gridLayout_16 = new QGridLayout(groupBox_24);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        toolBox_2 = new QToolBox(groupBox_24);
        toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
        toolBox_2->setMinimumSize(QSize(0, 310));
        toolBox_2->setMaximumSize(QSize(16777215, 310));
        toolBox_2->setStyleSheet(QString::fromUtf8(""));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 282, 242));
        gridLayout_10 = new QGridLayout(page_4);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_33 = new QLabel(page_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_10->addWidget(label_33, 4, 0, 1, 1);

        horizontalScrollBar_mv_y = new QScrollBar(page_4);
        horizontalScrollBar_mv_y->setObjectName(QString::fromUtf8("horizontalScrollBar_mv_y"));
        horizontalScrollBar_mv_y->setMinimum(-10);
        horizontalScrollBar_mv_y->setMaximum(10);
        horizontalScrollBar_mv_y->setSingleStep(1);
        horizontalScrollBar_mv_y->setPageStep(0);
        horizontalScrollBar_mv_y->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalScrollBar_mv_y, 3, 0, 1, 1);

        label_34 = new QLabel(page_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_10->addWidget(label_34, 0, 0, 1, 1);

        horizontalScrollBar_mv_z = new QScrollBar(page_4);
        horizontalScrollBar_mv_z->setObjectName(QString::fromUtf8("horizontalScrollBar_mv_z"));
        horizontalScrollBar_mv_z->setMinimum(-10);
        horizontalScrollBar_mv_z->setMaximum(10);
        horizontalScrollBar_mv_z->setSingleStep(1);
        horizontalScrollBar_mv_z->setPageStep(0);
        horizontalScrollBar_mv_z->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalScrollBar_mv_z, 5, 0, 1, 1);

        label_35 = new QLabel(page_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_10->addWidget(label_35, 2, 0, 1, 1);

        horizontalScrollBar_mv_x = new QScrollBar(page_4);
        horizontalScrollBar_mv_x->setObjectName(QString::fromUtf8("horizontalScrollBar_mv_x"));
        horizontalScrollBar_mv_x->setMinimum(-10);
        horizontalScrollBar_mv_x->setMaximum(10);
        horizontalScrollBar_mv_x->setSingleStep(1);
        horizontalScrollBar_mv_x->setPageStep(0);
        horizontalScrollBar_mv_x->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalScrollBar_mv_x, 1, 0, 1, 1);

        toolBox_2->addItem(page_4, QString::fromUtf8("Moving"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 282, 242));
        gridLayout_17 = new QGridLayout(page_5);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label_39 = new QLabel(page_5);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_17->addWidget(label_39, 0, 0, 1, 1);

        horizontalScrollBar_rot_x = new QScrollBar(page_5);
        horizontalScrollBar_rot_x->setObjectName(QString::fromUtf8("horizontalScrollBar_rot_x"));
        horizontalScrollBar_rot_x->setMinimum(-36);
        horizontalScrollBar_rot_x->setMaximum(36);
        horizontalScrollBar_rot_x->setPageStep(1);
        horizontalScrollBar_rot_x->setValue(1);
        horizontalScrollBar_rot_x->setOrientation(Qt::Horizontal);

        gridLayout_17->addWidget(horizontalScrollBar_rot_x, 1, 0, 1, 1);

        label_40 = new QLabel(page_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_17->addWidget(label_40, 2, 0, 1, 1);

        horizontalScrollBar_rot_y = new QScrollBar(page_5);
        horizontalScrollBar_rot_y->setObjectName(QString::fromUtf8("horizontalScrollBar_rot_y"));
        horizontalScrollBar_rot_y->setMinimum(-36);
        horizontalScrollBar_rot_y->setMaximum(36);
        horizontalScrollBar_rot_y->setPageStep(1);
        horizontalScrollBar_rot_y->setValue(1);
        horizontalScrollBar_rot_y->setOrientation(Qt::Horizontal);

        gridLayout_17->addWidget(horizontalScrollBar_rot_y, 3, 0, 1, 1);

        label_41 = new QLabel(page_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_17->addWidget(label_41, 4, 0, 1, 1);

        horizontalScrollBar_rot_z = new QScrollBar(page_5);
        horizontalScrollBar_rot_z->setObjectName(QString::fromUtf8("horizontalScrollBar_rot_z"));
        horizontalScrollBar_rot_z->setMinimum(-36);
        horizontalScrollBar_rot_z->setMaximum(36);
        horizontalScrollBar_rot_z->setPageStep(1);
        horizontalScrollBar_rot_z->setValue(1);
        horizontalScrollBar_rot_z->setOrientation(Qt::Horizontal);

        gridLayout_17->addWidget(horizontalScrollBar_rot_z, 5, 0, 1, 1);

        toolBox_2->addItem(page_5, QString::fromUtf8("Rotation"));

        gridLayout_16->addWidget(toolBox_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_24, 3, 0, 1, 2);

        pushButton_save_settings = new QPushButton(groupBox_5);
        pushButton_save_settings->setObjectName(QString::fromUtf8("pushButton_save_settings"));
        pushButton_save_settings->setMinimumSize(QSize(60, 25));
        pushButton_save_settings->setMaximumSize(QSize(16777215, 25));
        pushButton_save_settings->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"   background:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"    min-width: 60px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"} "));

        gridLayout_6->addWidget(pushButton_save_settings, 0, 1, 1, 1);

        pushButton_reset = new QPushButton(groupBox_5);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));
        pushButton_reset->setMinimumSize(QSize(60, 25));
        pushButton_reset->setMaximumSize(QSize(16777215, 25));
        pushButton_reset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"   background:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"    min-width: 60px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"} "));

        gridLayout_6->addWidget(pushButton_reset, 2, 1, 1, 1);

        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(0, 40));
        label_23->setMaximumSize(QSize(16777215, 40));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(label_23, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox = new QGroupBox(MainWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));

        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        groupBox_7 = new QGroupBox(MainWindow);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMaximumSize(QSize(200, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_7);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(16777215, 20));
        label_20->setFont(font);

        gridLayout_3->addWidget(label_20, 2, 0, 1, 3);

        groupBox_11 = new QGroupBox(groupBox_7);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setMinimumSize(QSize(0, 100));
        groupBox_11->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(groupBox_11);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(groupBox_11);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 1, 0, 1, 2);

        label_15 = new QLabel(groupBox_11);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 2, 0, 1, 2);

        label_19 = new QLabel(groupBox_11);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 0, 0, 1, 1);

        label_info_e = new QLabel(groupBox_11);
        label_info_e->setObjectName(QString::fromUtf8("label_info_e"));

        gridLayout_4->addWidget(label_info_e, 1, 2, 1, 1);

        label_info_v = new QLabel(groupBox_11);
        label_info_v->setObjectName(QString::fromUtf8("label_info_v"));

        gridLayout_4->addWidget(label_info_v, 0, 2, 1, 1);

        label_info_p = new QLabel(groupBox_11);
        label_info_p->setObjectName(QString::fromUtf8("label_info_p"));

        gridLayout_4->addWidget(label_info_p, 2, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_11, 1, 0, 1, 3);

        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(0, 400));
        gridLayout_5 = new QGridLayout(groupBox_8);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 2, 0, 1, 1);

        verticalScrollBar = new QScrollBar(groupBox_8);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setMinimumSize(QSize(20, 350));
        verticalScrollBar->setStyleSheet(QString::fromUtf8(""));
        verticalScrollBar->setMinimum(-500);
        verticalScrollBar->setMaximum(500);
        verticalScrollBar->setPageStep(1);
        verticalScrollBar->setValue(1);
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(verticalScrollBar, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_8, 3, 1, 1, 1);

        groupBox_28 = new QGroupBox(groupBox_7);
        groupBox_28->setObjectName(QString::fromUtf8("groupBox_28"));
        groupBox_28->setMinimumSize(QSize(0, 250));
        groupBox_28->setMaximumSize(QSize(16777215, 400));
        groupBox_28->setStyleSheet(QString::fromUtf8(""));
        gridLayout_21 = new QGridLayout(groupBox_28);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setHorizontalSpacing(10);
        gridLayout_21->setVerticalSpacing(0);
        gridLayout_21->setContentsMargins(12, 0, 12, 12);
        pushButton_sc_z_plus = new QPushButton(groupBox_28);
        pushButton_sc_z_plus->setObjectName(QString::fromUtf8("pushButton_sc_z_plus"));
        pushButton_sc_z_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"	 background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"    min-width: 40px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}"));

        gridLayout_21->addWidget(pushButton_sc_z_plus, 7, 1, 1, 1);

        pushButton_sc_y_minus = new QPushButton(groupBox_28);
        pushButton_sc_y_minus->setObjectName(QString::fromUtf8("pushButton_sc_y_minus"));
        pushButton_sc_y_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"   background:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"    min-width: 40px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"} "));

        gridLayout_21->addWidget(pushButton_sc_y_minus, 5, 0, 1, 1);

        label_44 = new QLabel(groupBox_28);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_21->addWidget(label_44, 4, 0, 1, 2);

        label_43 = new QLabel(groupBox_28);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_21->addWidget(label_43, 6, 0, 1, 2);

        pushButton_sc_y_plus = new QPushButton(groupBox_28);
        pushButton_sc_y_plus->setObjectName(QString::fromUtf8("pushButton_sc_y_plus"));
        pushButton_sc_y_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"	 background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"    min-width: 40px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:   qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}"));

        gridLayout_21->addWidget(pushButton_sc_y_plus, 5, 1, 1, 1);

        pushButton_sc_x_minus = new QPushButton(groupBox_28);
        pushButton_sc_x_minus->setObjectName(QString::fromUtf8("pushButton_sc_x_minus"));
        pushButton_sc_x_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"   background:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"    min-width: 40px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"} "));

        gridLayout_21->addWidget(pushButton_sc_x_minus, 3, 0, 1, 1);

        label_46 = new QLabel(groupBox_28);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setMinimumSize(QSize(0, 20));
        label_46->setMaximumSize(QSize(16777215, 14245));
        label_46->setFont(font);
        label_46->setStyleSheet(QString::fromUtf8(""));

        gridLayout_21->addWidget(label_46, 0, 0, 1, 2);

        pushButton_sc_x_plus = new QPushButton(groupBox_28);
        pushButton_sc_x_plus->setObjectName(QString::fromUtf8("pushButton_sc_x_plus"));
        pushButton_sc_x_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"	 background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"    min-width: 40px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"}"));

        gridLayout_21->addWidget(pushButton_sc_x_plus, 3, 1, 1, 1);

        pushButton_sc_z_minus = new QPushButton(groupBox_28);
        pushButton_sc_z_minus->setObjectName(QString::fromUtf8("pushButton_sc_z_minus"));
        pushButton_sc_z_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px;\n"
"    border-radius: 6px;\n"
"   background:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #A8BCFF, stop: 0.4 #3361FF,\n"
"                                stop: 0.5 #0033E0, stop: 1.0 #001F8A);\n"
"    min-width: 40px;\n"
"	color: #C5D0E6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #AF0FFF, stop: 0.4 #8100C2,\n"
"                                stop: 0.5 #7000A8, stop: 1.0 #47006B);\n"
"} "));

        gridLayout_21->addWidget(pushButton_sc_z_minus, 7, 0, 1, 1);

        label_45 = new QLabel(groupBox_28);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_21->addWidget(label_45, 2, 0, 1, 2);

        doubleSpinBox_sc_value = new QDoubleSpinBox(groupBox_28);
        doubleSpinBox_sc_value->setObjectName(QString::fromUtf8("doubleSpinBox_sc_value"));
        doubleSpinBox_sc_value->setMinimumSize(QSize(0, 0));
        doubleSpinBox_sc_value->setMinimum(0.100000000000000);
        doubleSpinBox_sc_value->setMaximum(0.900000000000000);
        doubleSpinBox_sc_value->setSingleStep(0.100000000000000);

        gridLayout_21->addWidget(doubleSpinBox_sc_value, 1, 1, 1, 1);

        label_47 = new QLabel(groupBox_28);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_21->addWidget(label_47, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_28, 4, 0, 1, 3);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 20));
        label_21->setMaximumSize(QSize(16777215, 20));
        label_21->setFont(font);

        gridLayout_3->addWidget(label_21, 0, 0, 1, 3);


        gridLayout->addWidget(groupBox_7, 1, 2, 1, 1);


        retranslateUi(MainWindow);

        settings_box->setCurrentIndex(2);
        toolBox_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Widget", nullptr));
        hz->setText(QString());
        groupBox_6->setTitle(QString());
        groupBox_9->setTitle(QString());
        pushButton_screenshot->setText(QCoreApplication::translate("MainWindow", "Capture picture", nullptr));
        pushButton_gif->setText(QCoreApplication::translate("MainWindow", "Record GIF", nullptr));
        groupBox_10->setTitle(QString());
        label_42->setText(QCoreApplication::translate("MainWindow", "Projection type", nullptr));
        projection_type->setItemText(0, QCoreApplication::translate("MainWindow", "Central", nullptr));
        projection_type->setItemText(1, QCoreApplication::translate("MainWindow", "Parallel", nullptr));

        groupBox_22->setTitle(QString());
        pushButton_select_name->setText(QCoreApplication::translate("MainWindow", "Select File", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_23->setTitle(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        settings_box->setItemText(settings_box->indexOf(page), QCoreApplication::translate("MainWindow", "Background color", nullptr));
        radioButton_stipple->setText(QCoreApplication::translate("MainWindow", "Stipple", nullptr));
        radioButton_line->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        settings_box->setItemText(settings_box->indexOf(page_2), QCoreApplication::translate("MainWindow", "Lines", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        radioButton_circles->setText(QCoreApplication::translate("MainWindow", "Circles", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        radioButton_quads->setText(QCoreApplication::translate("MainWindow", "Quads", nullptr));
        radioButton_norm->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        settings_box->setItemText(settings_box->indexOf(page_3), QCoreApplication::translate("MainWindow", "Vertexes", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Position", nullptr));
        groupBox_24->setTitle(QString());
        label_33->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QCoreApplication::translate("MainWindow", "Moving", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_5), QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        pushButton_save_settings->setText(QCoreApplication::translate("MainWindow", "Save settings", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("MainWindow", "Reset position", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        groupBox->setTitle(QString());
        groupBox_7->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "Scale:", nullptr));
        groupBox_11->setTitle(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Polygons", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_info_e->setText(QCoreApplication::translate("MainWindow", "012345", nullptr));
        label_info_v->setText(QCoreApplication::translate("MainWindow", "012345", nullptr));
        label_info_p->setText(QCoreApplication::translate("MainWindow", "012345", nullptr));
        groupBox_8->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        groupBox_28->setTitle(QString());
        pushButton_sc_z_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_y_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_sc_y_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_x_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "Scaling coordinates", nullptr));
        pushButton_sc_x_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_z_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Object info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H