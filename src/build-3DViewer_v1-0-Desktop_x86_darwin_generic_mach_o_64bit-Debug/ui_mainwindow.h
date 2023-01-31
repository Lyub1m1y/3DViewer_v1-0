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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *label_object_name;
    QGroupBox *groupBox;
    QGroupBox *groupBox_13;
    QPushButton *pushButton_mv_x_minus;
    QPushButton *pushButton_mv_x_plus;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_mv_y_minus;
    QPushButton *pushButton_mv_y_plus;
    QGroupBox *groupBox_15;
    QPushButton *pushButton_mv_z_minus;
    QPushButton *pushButton_mv_z_plus;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QComboBox *projection_type;
    QPushButton *pushButton_save_settings;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QScrollBar *horizontalScrollBar_bgr_R;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QScrollBar *horizontalScrollBar_bgr_G;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QScrollBar *horizontalScrollBar_bgr_B;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboBox_edges_type;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QScrollBar *horizontalScrollBar_edges_R;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QScrollBar *horizontalScrollBar_edges_B;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QScrollBar *horizontalScrollBar_edges_G;
    QSpinBox *spinBox_edges_size;
    QGroupBox *groupBox_27;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QComboBox *vertexes_type;
    QLabel *label_17;
    QSpinBox *spinBox_vertexes_size;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QScrollBar *horizontalScrollBar_vertexes_R;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QScrollBar *horizontalScrollBar_vertexes_B;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QScrollBar *horizontalScrollBar_vertexes_G;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_screenshot;
    QPushButton *pushButton_gif;
    QGroupBox *groupBox_12;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_info_v;
    QLabel *label_info_p;
    QLabel *label_info_e;
    QPushButton *pushButton_select_name;
    QGroupBox *groupBox_16;
    QGroupBox *groupBox_18;
    QPushButton *pushButton_rt_y_minus;
    QPushButton *pushButton_rt_y_plus;
    QGroupBox *groupBox_19;
    QPushButton *pushButton_rt_z_minus;
    QPushButton *pushButton_rt_z_plus;
    QGroupBox *groupBox_20;
    QPushButton *pushButton_rt_x_minus;
    QPushButton *pushButton_rt_x_plus;
    QGroupBox *groupBox_2;
    QDoubleSpinBox *doubleSpinBox_mv_value;
    QGroupBox *groupBox_3;
    QDoubleSpinBox *doubleSpinBox_rt_value;
    QLabel *hz;
    QGroupBox *groupBox_21;
    QPushButton *pushButton_sc_all_plus;
    QPushButton *pushButton_sc_all_minus;
    QDoubleSpinBox *doubleSpinBox_sc_all_value;
    QGroupBox *groupBox_23;
    QPushButton *pushButton_sc_x_plus;
    QPushButton *pushButton_sc_x_minus;
    QDoubleSpinBox *doubleSpinBox_sc_x_value;
    QGroupBox *groupBox_24;
    QPushButton *pushButton_sc_y_plus;
    QPushButton *pushButton_sc_y_minus;
    QDoubleSpinBox *doubleSpinBox_sc_y_value;
    QGroupBox *groupBox_25;
    QPushButton *pushButton_sc_z_plus;
    QPushButton *pushButton_sc_z_minus;
    QDoubleSpinBox *doubleSpinBox_sc_z_value;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(800, 640);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        label_object_name = new QLabel(MainWindow);
        label_object_name->setObjectName(QString::fromUtf8("label_object_name"));
        label_object_name->setGeometry(QRect(190, 10, 251, 20));
        label_object_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox = new QGroupBox(MainWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(650, 0, 141, 141));
        groupBox_13 = new QGroupBox(groupBox);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(10, 10, 120, 41));
        groupBox_13->setLayoutDirection(Qt::RightToLeft);
        pushButton_mv_x_minus = new QPushButton(groupBox_13);
        pushButton_mv_x_minus->setObjectName(QString::fromUtf8("pushButton_mv_x_minus"));
        pushButton_mv_x_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_mv_x_plus = new QPushButton(groupBox_13);
        pushButton_mv_x_plus->setObjectName(QString::fromUtf8("pushButton_mv_x_plus"));
        pushButton_mv_x_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_14 = new QGroupBox(groupBox);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(10, 50, 120, 41));
        groupBox_14->setLayoutDirection(Qt::RightToLeft);
        pushButton_mv_y_minus = new QPushButton(groupBox_14);
        pushButton_mv_y_minus->setObjectName(QString::fromUtf8("pushButton_mv_y_minus"));
        pushButton_mv_y_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_mv_y_plus = new QPushButton(groupBox_14);
        pushButton_mv_y_plus->setObjectName(QString::fromUtf8("pushButton_mv_y_plus"));
        pushButton_mv_y_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_15 = new QGroupBox(groupBox);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(10, 90, 120, 41));
        groupBox_15->setLayoutDirection(Qt::RightToLeft);
        pushButton_mv_z_minus = new QPushButton(groupBox_15);
        pushButton_mv_z_minus->setObjectName(QString::fromUtf8("pushButton_mv_z_minus"));
        pushButton_mv_z_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_mv_z_plus = new QPushButton(groupBox_15);
        pushButton_mv_z_plus->setObjectName(QString::fromUtf8("pushButton_mv_z_plus"));
        pushButton_mv_z_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_4 = new QGroupBox(MainWindow);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 281, 541));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 141, 51));
        groupBox_5->setLayoutDirection(Qt::RightToLeft);
        projection_type = new QComboBox(groupBox_5);
        projection_type->addItem(QString());
        projection_type->addItem(QString());
        projection_type->setObjectName(QString::fromUtf8("projection_type"));
        projection_type->setGeometry(QRect(8, 20, 121, 22));
        pushButton_save_settings = new QPushButton(groupBox_4);
        pushButton_save_settings->setObjectName(QString::fromUtf8("pushButton_save_settings"));
        pushButton_save_settings->setGeometry(QRect(80, 510, 81, 24));
        groupBox_26 = new QGroupBox(groupBox_4);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        groupBox_26->setEnabled(true);
        groupBox_26->setGeometry(QRect(0, 90, 260, 121));
        groupBox_26->setMinimumSize(QSize(260, 0));
        verticalLayout_3 = new QVBoxLayout(groupBox_26);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(groupBox_26);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(label);

        horizontalScrollBar_bgr_R = new QScrollBar(groupBox_26);
        horizontalScrollBar_bgr_R->setObjectName(QString::fromUtf8("horizontalScrollBar_bgr_R"));
        horizontalScrollBar_bgr_R->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalScrollBar_bgr_R);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(groupBox_26);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_7->addWidget(label_2);

        horizontalScrollBar_bgr_G = new QScrollBar(groupBox_26);
        horizontalScrollBar_bgr_G->setObjectName(QString::fromUtf8("horizontalScrollBar_bgr_G"));
        horizontalScrollBar_bgr_G->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalScrollBar_bgr_G);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(groupBox_26);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(label_3);

        horizontalScrollBar_bgr_B = new QScrollBar(groupBox_26);
        horizontalScrollBar_bgr_B->setObjectName(QString::fromUtf8("horizontalScrollBar_bgr_B"));
        horizontalScrollBar_bgr_B->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalScrollBar_bgr_B);


        verticalLayout_3->addLayout(horizontalLayout_8);

        groupBox_17 = new QGroupBox(groupBox_4);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(10, 230, 260, 131));
        groupBox_17->setMinimumSize(QSize(260, 0));
        gridLayout = new QGridLayout(groupBox_17);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        comboBox_edges_type = new QComboBox(groupBox_17);
        comboBox_edges_type->addItem(QString());
        comboBox_edges_type->addItem(QString());
        comboBox_edges_type->setObjectName(QString::fromUtf8("comboBox_edges_type"));

        verticalLayout_4->addWidget(comboBox_edges_type);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 2, 1);

        label_16 = new QLabel(groupBox_17);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(110, 19));

        gridLayout->addWidget(label_16, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(groupBox_17);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_9->addWidget(label_4);

        horizontalScrollBar_edges_R = new QScrollBar(groupBox_17);
        horizontalScrollBar_edges_R->setObjectName(QString::fromUtf8("horizontalScrollBar_edges_R"));
        horizontalScrollBar_edges_R->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalScrollBar_edges_R);


        gridLayout->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_17);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_11->addWidget(label_6);

        horizontalScrollBar_edges_B = new QScrollBar(groupBox_17);
        horizontalScrollBar_edges_B->setObjectName(QString::fromUtf8("horizontalScrollBar_edges_B"));
        horizontalScrollBar_edges_B->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalScrollBar_edges_B);


        gridLayout->addLayout(horizontalLayout_11, 2, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(groupBox_17);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_10->addWidget(label_5);

        horizontalScrollBar_edges_G = new QScrollBar(groupBox_17);
        horizontalScrollBar_edges_G->setObjectName(QString::fromUtf8("horizontalScrollBar_edges_G"));
        horizontalScrollBar_edges_G->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalScrollBar_edges_G);


        gridLayout->addLayout(horizontalLayout_10, 1, 1, 1, 1);

        spinBox_edges_size = new QSpinBox(groupBox_17);
        spinBox_edges_size->setObjectName(QString::fromUtf8("spinBox_edges_size"));
        spinBox_edges_size->setMinimum(1);
        spinBox_edges_size->setMaximum(10);
        spinBox_edges_size->setValue(1);

        gridLayout->addWidget(spinBox_edges_size, 3, 0, 1, 1);

        groupBox_27 = new QGroupBox(groupBox_4);
        groupBox_27->setObjectName(QString::fromUtf8("groupBox_27"));
        groupBox_27->setGeometry(QRect(10, 370, 260, 131));
        groupBox_27->setMinimumSize(QSize(260, 0));
        gridLayout_2 = new QGridLayout(groupBox_27);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        vertexes_type = new QComboBox(groupBox_27);
        vertexes_type->addItem(QString());
        vertexes_type->addItem(QString());
        vertexes_type->addItem(QString());
        vertexes_type->setObjectName(QString::fromUtf8("vertexes_type"));

        verticalLayout_5->addWidget(vertexes_type);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 2, 1);

        label_17 = new QLabel(groupBox_27);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(110, 19));

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        spinBox_vertexes_size = new QSpinBox(groupBox_27);
        spinBox_vertexes_size->setObjectName(QString::fromUtf8("spinBox_vertexes_size"));
        spinBox_vertexes_size->setMinimum(1);
        spinBox_vertexes_size->setValue(1);
        spinBox_vertexes_size->setDisplayIntegerBase(10);

        gridLayout_2->addWidget(spinBox_vertexes_size, 3, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_7 = new QLabel(groupBox_27);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_12->addWidget(label_7);

        horizontalScrollBar_vertexes_R = new QScrollBar(groupBox_27);
        horizontalScrollBar_vertexes_R->setObjectName(QString::fromUtf8("horizontalScrollBar_vertexes_R"));
        horizontalScrollBar_vertexes_R->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_vertexes_R->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalScrollBar_vertexes_R);


        gridLayout_2->addLayout(horizontalLayout_12, 0, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(groupBox_27);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_13->addWidget(label_11);

        horizontalScrollBar_vertexes_B = new QScrollBar(groupBox_27);
        horizontalScrollBar_vertexes_B->setObjectName(QString::fromUtf8("horizontalScrollBar_vertexes_B"));
        horizontalScrollBar_vertexes_B->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_vertexes_B->setMaximumSize(QSize(196, 16777215));
        horizontalScrollBar_vertexes_B->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalScrollBar_vertexes_B);


        gridLayout_2->addLayout(horizontalLayout_13, 2, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_18 = new QLabel(groupBox_27);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_14->addWidget(label_18);

        horizontalScrollBar_vertexes_G = new QScrollBar(groupBox_27);
        horizontalScrollBar_vertexes_G->setObjectName(QString::fromUtf8("horizontalScrollBar_vertexes_G"));
        horizontalScrollBar_vertexes_G->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_vertexes_G->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(horizontalScrollBar_vertexes_G);


        gridLayout_2->addLayout(horizontalLayout_14, 1, 1, 1, 1);

        groupBox_11 = new QGroupBox(MainWindow);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 550, 161, 81));
        pushButton_screenshot = new QPushButton(groupBox_11);
        pushButton_screenshot->setObjectName(QString::fromUtf8("pushButton_screenshot"));
        pushButton_screenshot->setGeometry(QRect(10, 20, 141, 24));
        pushButton_gif = new QPushButton(groupBox_11);
        pushButton_gif->setObjectName(QString::fromUtf8("pushButton_gif"));
        pushButton_gif->setGeometry(QRect(10, 50, 141, 24));
        groupBox_12 = new QGroupBox(MainWindow);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(650, 140, 141, 81));
        label_8 = new QLabel(groupBox_12);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 49, 16));
        label_9 = new QLabel(groupBox_12);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 49, 16));
        label_10 = new QLabel(groupBox_12);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 60, 49, 16));
        label_info_v = new QLabel(groupBox_12);
        label_info_v->setObjectName(QString::fromUtf8("label_info_v"));
        label_info_v->setGeometry(QRect(70, 20, 61, 20));
        label_info_v->setLayoutDirection(Qt::LeftToRight);
        label_info_v->setStyleSheet(QString::fromUtf8(""));
        label_info_v->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_info_p = new QLabel(groupBox_12);
        label_info_p->setObjectName(QString::fromUtf8("label_info_p"));
        label_info_p->setGeometry(QRect(70, 60, 61, 20));
        label_info_p->setLayoutDirection(Qt::LeftToRight);
        label_info_p->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_info_e = new QLabel(groupBox_12);
        label_info_e->setObjectName(QString::fromUtf8("label_info_e"));
        label_info_e->setGeometry(QRect(70, 40, 61, 20));
        label_info_e->setLayoutDirection(Qt::LeftToRight);
        label_info_e->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_select_name = new QPushButton(MainWindow);
        pushButton_select_name->setObjectName(QString::fromUtf8("pushButton_select_name"));
        pushButton_select_name->setGeometry(QRect(650, 230, 141, 24));
        groupBox_16 = new QGroupBox(MainWindow);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(650, 430, 141, 141));
        groupBox_18 = new QGroupBox(groupBox_16);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(10, 50, 120, 41));
        groupBox_18->setLayoutDirection(Qt::RightToLeft);
        pushButton_rt_y_minus = new QPushButton(groupBox_18);
        pushButton_rt_y_minus->setObjectName(QString::fromUtf8("pushButton_rt_y_minus"));
        pushButton_rt_y_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_rt_y_plus = new QPushButton(groupBox_18);
        pushButton_rt_y_plus->setObjectName(QString::fromUtf8("pushButton_rt_y_plus"));
        pushButton_rt_y_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_19 = new QGroupBox(groupBox_16);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        groupBox_19->setGeometry(QRect(10, 90, 120, 41));
        groupBox_19->setLayoutDirection(Qt::RightToLeft);
        pushButton_rt_z_minus = new QPushButton(groupBox_19);
        pushButton_rt_z_minus->setObjectName(QString::fromUtf8("pushButton_rt_z_minus"));
        pushButton_rt_z_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_rt_z_plus = new QPushButton(groupBox_19);
        pushButton_rt_z_plus->setObjectName(QString::fromUtf8("pushButton_rt_z_plus"));
        pushButton_rt_z_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_20 = new QGroupBox(groupBox_16);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        groupBox_20->setGeometry(QRect(10, 10, 120, 41));
        groupBox_20->setLayoutDirection(Qt::RightToLeft);
        pushButton_rt_x_minus = new QPushButton(groupBox_20);
        pushButton_rt_x_minus->setObjectName(QString::fromUtf8("pushButton_rt_x_minus"));
        pushButton_rt_x_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_rt_x_plus = new QPushButton(groupBox_20);
        pushButton_rt_x_plus->setObjectName(QString::fromUtf8("pushButton_rt_x_plus"));
        pushButton_rt_x_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_2 = new QGroupBox(MainWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(560, 0, 81, 51));
        doubleSpinBox_mv_value = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_mv_value->setObjectName(QString::fromUtf8("doubleSpinBox_mv_value"));
        doubleSpinBox_mv_value->setGeometry(QRect(10, 20, 62, 22));
        doubleSpinBox_mv_value->setMinimum(0.100000000000000);
        doubleSpinBox_mv_value->setMaximum(1.000000000000000);
        doubleSpinBox_mv_value->setSingleStep(0.100000000000000);
        groupBox_3 = new QGroupBox(MainWindow);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(670, 380, 71, 51));
        doubleSpinBox_rt_value = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_rt_value->setObjectName(QString::fromUtf8("doubleSpinBox_rt_value"));
        doubleSpinBox_rt_value->setGeometry(QRect(10, 20, 51, 22));
        doubleSpinBox_rt_value->setMinimum(0.100000000000000);
        doubleSpinBox_rt_value->setMaximum(1.000000000000000);
        doubleSpinBox_rt_value->setSingleStep(0.100000000000000);
        hz = new QLabel(MainWindow);
        hz->setObjectName(QString::fromUtf8("hz"));
        hz->setGeometry(QRect(190, 600, 51, 20));
        groupBox_21 = new QGroupBox(MainWindow);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(450, 360, 190, 271));
        pushButton_sc_all_plus = new QPushButton(groupBox_21);
        pushButton_sc_all_plus->setObjectName(QString::fromUtf8("pushButton_sc_all_plus"));
        pushButton_sc_all_plus->setGeometry(QRect(50, 20, 41, 31));
        pushButton_sc_all_minus = new QPushButton(groupBox_21);
        pushButton_sc_all_minus->setObjectName(QString::fromUtf8("pushButton_sc_all_minus"));
        pushButton_sc_all_minus->setGeometry(QRect(0, 20, 41, 31));
        doubleSpinBox_sc_all_value = new QDoubleSpinBox(groupBox_21);
        doubleSpinBox_sc_all_value->setObjectName(QString::fromUtf8("doubleSpinBox_sc_all_value"));
        doubleSpinBox_sc_all_value->setGeometry(QRect(100, 30, 87, 21));
        doubleSpinBox_sc_all_value->setMinimum(0.100000000000000);
        doubleSpinBox_sc_all_value->setMaximum(1.000000000000000);
        doubleSpinBox_sc_all_value->setSingleStep(0.100000000000000);
        groupBox_23 = new QGroupBox(groupBox_21);
        groupBox_23->setObjectName(QString::fromUtf8("groupBox_23"));
        groupBox_23->setGeometry(QRect(0, 70, 190, 61));
        pushButton_sc_x_plus = new QPushButton(groupBox_23);
        pushButton_sc_x_plus->setObjectName(QString::fromUtf8("pushButton_sc_x_plus"));
        pushButton_sc_x_plus->setGeometry(QRect(50, 20, 41, 31));
        pushButton_sc_x_minus = new QPushButton(groupBox_23);
        pushButton_sc_x_minus->setObjectName(QString::fromUtf8("pushButton_sc_x_minus"));
        pushButton_sc_x_minus->setGeometry(QRect(0, 20, 41, 31));
        doubleSpinBox_sc_x_value = new QDoubleSpinBox(groupBox_23);
        doubleSpinBox_sc_x_value->setObjectName(QString::fromUtf8("doubleSpinBox_sc_x_value"));
        doubleSpinBox_sc_x_value->setGeometry(QRect(100, 30, 87, 21));
        doubleSpinBox_sc_x_value->setMinimum(0.100000000000000);
        doubleSpinBox_sc_x_value->setMaximum(1.000000000000000);
        doubleSpinBox_sc_x_value->setSingleStep(0.100000000000000);
        groupBox_24 = new QGroupBox(groupBox_21);
        groupBox_24->setObjectName(QString::fromUtf8("groupBox_24"));
        groupBox_24->setGeometry(QRect(0, 130, 190, 61));
        pushButton_sc_y_plus = new QPushButton(groupBox_24);
        pushButton_sc_y_plus->setObjectName(QString::fromUtf8("pushButton_sc_y_plus"));
        pushButton_sc_y_plus->setGeometry(QRect(50, 20, 41, 31));
        pushButton_sc_y_minus = new QPushButton(groupBox_24);
        pushButton_sc_y_minus->setObjectName(QString::fromUtf8("pushButton_sc_y_minus"));
        pushButton_sc_y_minus->setGeometry(QRect(0, 20, 41, 31));
        doubleSpinBox_sc_y_value = new QDoubleSpinBox(groupBox_24);
        doubleSpinBox_sc_y_value->setObjectName(QString::fromUtf8("doubleSpinBox_sc_y_value"));
        doubleSpinBox_sc_y_value->setGeometry(QRect(100, 30, 87, 21));
        doubleSpinBox_sc_y_value->setMinimum(0.100000000000000);
        doubleSpinBox_sc_y_value->setMaximum(1.000000000000000);
        doubleSpinBox_sc_y_value->setSingleStep(0.100000000000000);
        groupBox_25 = new QGroupBox(groupBox_21);
        groupBox_25->setObjectName(QString::fromUtf8("groupBox_25"));
        groupBox_25->setGeometry(QRect(0, 200, 190, 61));
        pushButton_sc_z_plus = new QPushButton(groupBox_25);
        pushButton_sc_z_plus->setObjectName(QString::fromUtf8("pushButton_sc_z_plus"));
        pushButton_sc_z_plus->setGeometry(QRect(50, 20, 41, 31));
        pushButton_sc_z_minus = new QPushButton(groupBox_25);
        pushButton_sc_z_minus->setObjectName(QString::fromUtf8("pushButton_sc_z_minus"));
        pushButton_sc_z_minus->setGeometry(QRect(0, 20, 41, 31));
        doubleSpinBox_sc_z_value = new QDoubleSpinBox(groupBox_25);
        doubleSpinBox_sc_z_value->setObjectName(QString::fromUtf8("doubleSpinBox_sc_z_value"));
        doubleSpinBox_sc_z_value->setGeometry(QRect(100, 30, 87, 21));
        doubleSpinBox_sc_z_value->setMinimum(0.100000000000000);
        doubleSpinBox_sc_z_value->setMaximum(1.000000000000000);
        doubleSpinBox_sc_z_value->setSingleStep(0.100000000000000);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Widget", nullptr));
        label_object_name->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Moving", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_mv_x_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_mv_x_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButton_mv_y_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_mv_y_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_mv_z_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_mv_z_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Projection type", nullptr));
        projection_type->setItemText(0, QCoreApplication::translate("MainWindow", "Central", nullptr));
        projection_type->setItemText(1, QCoreApplication::translate("MainWindow", "Parallel", nullptr));

        pushButton_save_settings->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        groupBox_26->setTitle(QCoreApplication::translate("MainWindow", "Background", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "Setting edges", nullptr));
        comboBox_edges_type->setItemText(0, QCoreApplication::translate("MainWindow", "Line", nullptr));
        comboBox_edges_type->setItemText(1, QCoreApplication::translate("MainWindow", "Stipple", nullptr));

        label_16->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        groupBox_27->setTitle(QCoreApplication::translate("MainWindow", "Settings vertex", nullptr));
        vertexes_type->setItemText(0, QCoreApplication::translate("MainWindow", "Norm", nullptr));
        vertexes_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241ircles", nullptr));
        vertexes_type->setItemText(2, QCoreApplication::translate("MainWindow", "Quads", nullptr));

        label_17->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "Record", nullptr));
        pushButton_screenshot->setText(QCoreApplication::translate("MainWindow", "ScreenShot", nullptr));
        pushButton_gif->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "Object info", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Polygons", nullptr));
        label_info_v->setText(QString());
        label_info_p->setText(QString());
        label_info_e->setText(QString());
        pushButton_select_name->setText(QCoreApplication::translate("MainWindow", "Select File", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButton_rt_y_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_rt_y_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_rt_z_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_rt_z_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_20->setTitle(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_rt_x_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_rt_x_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Mv Value ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Rt Value ", nullptr));
        hz->setText(QString());
        groupBox_21->setTitle(QCoreApplication::translate("MainWindow", "Scaling", nullptr));
        pushButton_sc_all_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_all_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        groupBox_23->setTitle(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_sc_x_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_x_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        groupBox_24->setTitle(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButton_sc_y_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_y_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        groupBox_25->setTitle(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_sc_z_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sc_z_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
