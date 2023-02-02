#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//для заглушки предупреждений о версии macOs
#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif

#include <qgroupbox.h>

#include <QFileDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QOpenGLWidget>
#include <QSettings>
#include <QThread>
#include <QTimer>
#include <QWidget>

#include "qgifimage.h"
extern "C" {
#include "../Model/viewer.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QOpenGLWidget {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  data_t structData = {0, 0, 0, NULL, NULL};

  QString file;

  float xRot, yRot, zRot;
  float mv_value_X, mv_value_Y, mv_value_Z;
  double rot_value_X, rot_value_Y, rot_value_Z, qvalue;

  QPoint mPos;
  void initFile(char *path);
  void draw();
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;
  void wheelEvent(QWheelEvent*event) override;

  void saveSettings();
  void loadSettings();

  QImage image;

  double bgrClrR, bgrClrG, bgrClrB;
  double edgClrR, edgClrG, edgClrB;
  double vertClrR, vertClrG, vertClrB;

  int framCountE;

 private slots:
  void on_projection_type_activated();
  void on_spinBox_vertexes_size_valueChanged();
  void on_spinBox_edges_size_valueChanged();
  void on_pushButton_select_name_clicked();
  void on_pushButton_save_settings_clicked();
  void on_pushButton_screenshot_clicked();
  void on_pushButton_gif_clicked();

  // bgr color
  void on_horizontalScrollBar_bgr_R_valueChanged(int value);
  void on_horizontalScrollBar_bgr_G_valueChanged(int value);
  void on_horizontalScrollBar_bgr_B_valueChanged(int value);

  // edges color
  void on_horizontalScrollBar_edges_R_valueChanged(int value);
  void on_horizontalScrollBar_edges_G_valueChanged(int value);
  void on_horizontalScrollBar_edges_B_valueChanged(int value);

  // vertexes color
  void on_horizontalScrollBar_vertexes_R_valueChanged(int value);
  void on_horizontalScrollBar_vertexes_G_valueChanged(int value);
  void on_horizontalScrollBar_vertexes_B_valueChanged(int value);

  void gif_creator();
  void gif_timer();
  void error_message(QString message);

  void on_pushButton_sc_x_plus_clicked();
  void on_pushButton_sc_y_plus_clicked();
  void on_pushButton_sc_z_plus_clicked();
  void on_pushButton_sc_x_minus_clicked();
  void on_pushButton_sc_y_minus_clicked();
  void on_pushButton_sc_z_minus_clicked();

  void on_pushButton_reset_clicked();



  void on_horizontalScrollBar_mv_x_valueChanged(int value);

  void on_horizontalScrollBar_mv_x_sliderReleased();

  void on_horizontalScrollBar_mv_y_valueChanged(int value);

  void on_horizontalScrollBar_mv_y_sliderReleased();

  void on_horizontalScrollBar_mv_z_valueChanged(int value);

  void on_horizontalScrollBar_mv_z_sliderReleased();

  void on_horizontalScrollBar_rot_x_valueChanged(int value);

  void on_horizontalScrollBar_rot_x_sliderReleased();

  void on_horizontalScrollBar_rot_y_sliderReleased();

  void on_horizontalScrollBar_rot_y_valueChanged(int value);

  void on_horizontalScrollBar_rot_z_valueChanged(int value);

  void on_horizontalScrollBar_rot_z_sliderReleased();

  void on_verticalScrollBar_valueChanged(int value);

  void on_verticalScrollBar_sliderReleased();

  void on_spinBox_bgr_R_valueChanged(int arg1);

  void on_spinBox_bgr_G_valueChanged(int arg1);

  void on_spinBox_bgr_B_valueChanged(int arg1);

  void on_spinBox_edges_R_valueChanged(int arg1);

  void on_spinBox_edges_G_valueChanged(int arg1);

  void on_spinBox_edges_B_valueChanged(int arg1);

  void on_spinBox_vertexes_R_valueChanged(int arg1);

  void on_spinBox_vertexes_G_valueChanged(int arg1);

  void on_spinBox_vertexes_B_valueChanged(int arg1);

private:
  Ui::MainWindow *ui;

  int numberFps;
  QTimer *gifTmr;
  QGifImage *gifImg;
  QString gifFileName;
  QSettings *settings;
};
#endif  // MAINWINDOW_H
