#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QOpenGLWidget(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  settings = new QSettings(this);
  loadSettings();
  framcountE = 0;
  timer = new QTimer(this);
  //  connect(timer, &QTimer::timeout, this, &MainWindow::gif_creator);
  gifTmr = new QTimer();
  connect(gifTmr, SIGNAL(timeout()), this, SLOT(gif_creator()));
  fon_r_ = 0.0, fon_g_ = 0.0, fon_b_ = 0.0;
  line_r_ = 0.0, line_g_ = 0.0, line_b_ = 0.0;
  dot_r_ = 0.0, dot_g_ = 0.0, dot_b_ = 0.0;
}

MainWindow::~MainWindow() {
  gifTmr->~QTimer();
  delete ui;
}

void MainWindow::initializeGL() {
  //  char file[] = "";
  // TODO deleate
  char file[] = "/Users/katrinap/Desktop/3DViewer_v1-main/src/objects/gun.obj";
  parser(&structData, file);
  ui->label_info_v->setNum(structData.countV);
  ui->label_info_e->setNum(structData.countE);
  ui->label_info_p->setNum(structData.countP);
  glEnable(GL_DEPTH_TEST);
}

void MainWindow::resizeGL(int w, int h) {
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
}

void MainWindow::paintGL() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  if (ui->projection_type->currentIndex() == 0) {
    glFrustum(-2, 2, -2, 2, 1, 15);
    glTranslated(0, 0, -2);
  } else if (ui->projection_type->currentIndex() == 1) {
    glOrtho(-2, 2, -2, 2, 1, 15);
    glTranslated(0, 0, -3);
  }
  glRotatef(xRot, 1, 0, 0);
  glRotatef(yRot, 0, 1, 0);
  draw();
}

void MainWindow::saveSettings() {
  settings->setValue("projection_type", ui->projection_type->currentIndex());
  settings->setValue("edges_type", ui->comboBox_edges_type->currentIndex());
  settings->setValue("vertexes_type", ui->vertexes_type->currentIndex());

  settings->setValue("edges_size", ui->spinBox_edges_size->value());
  settings->setValue("vertexes_size", ui->spinBox_vertexes_size->value());

  settings->setValue("horizontalScrollBar_bgr_R",
                     ui->horizontalScrollBar_bgr_R->value());
  settings->setValue("horizontalScrollBar_bgr_G",
                     ui->horizontalScrollBar_bgr_G->value());
  settings->setValue("horizontalScrollBar_bgr_B",
                     ui->horizontalScrollBar_bgr_B->value());

  settings->setValue("horizontalScrollBar_edges_R",
                     ui->horizontalScrollBar_edges_R->value());
  settings->setValue("horizontalScrollBar_edges_G",
                     ui->horizontalScrollBar_edges_G->value());
  settings->setValue("horizontalScrollBar_edges_B",
                     ui->horizontalScrollBar_edges_B->value());

  settings->setValue("horizontalScrollBar_8",
                     ui->horizontalScrollBar_8->value());
  settings->setValue("horizontalScrollBar_9",
                     ui->horizontalScrollBar_9->value());
  settings->setValue("horizontalScrollBar_10",
                     ui->horizontalScrollBar_10->value());
}

void MainWindow::loadSettings() {
  ui->projection_type->setCurrentIndex(
      settings->value("projection_type", "0").toInt());
  ui->comboBox_edges_type->setCurrentIndex(
      settings->value("edges_type", "0").toInt());
  ui->vertexes_type->setCurrentIndex(
      settings->value("vertexes_type", "0").toInt());

  ui->spinBox_edges_size->setValue(settings->value("edges_size", "1").toInt());
  ui->spinBox_vertexes_size->setValue(
      settings->value("vertexes_size", "10").toInt());

  // back color
  ui->horizontalScrollBar_bgr_R->setValue(
      settings->value("horizontalScrollBar_bgr_R").toInt());
  ui->horizontalScrollBar_bgr_G->setValue(
      settings->value("horizontalScrollBar_bgr_G").toInt());
  ui->horizontalScrollBar_bgr_B->setValue(
      settings->value("horizontalScrollBar_bgr_B").toInt());

  ui->horizontalScrollBar_edges_R->setValue(
      settings->value("horizontalScrollBar_edges_R").toInt());
  ui->horizontalScrollBar_edges_G->setValue(
      settings->value("horizontalScrollBar_edges_G").toInt());
  ui->horizontalScrollBar_edges_B->setValue(
      settings->value("horizontalScrollBar_edges_B").toInt());

  ui->horizontalScrollBar_8->setValue(
      settings->value("horizontalScrollBar_8").toInt());
  ui->horizontalScrollBar_9->setValue(
      settings->value("horizontalScrollBar_9").toInt());
  ui->horizontalScrollBar_10->setValue(
      settings->value("horizontalScrollBar_10").toInt());
}
void MainWindow::mousePressEvent(QMouseEvent* mo) { mPos = mo->pos(); }
void MainWindow::mouseMoveEvent(QMouseEvent* mo) {
  xRot = 1 / M_PI * (mo->pos().y() - mPos.y());
  yRot = 1 / M_PI * (mo->pos().x() - mPos.x());
  update();
}

void MainWindow::draw() {
  // double max_el = 0.0;
  // for (int i = 0; i < structData.countV; i++) {
  //   if (max_el < structData.arrVertexes[i]) {
  //     max_el = structData.arrVertexes[i];
  //   }
  // }
  // for (int i = 0; i < (structData.countV) * 3; i++) {
  //   structData.arrVertexes[i] /= max_el;
  // }

  glVertexPointer(3, GL_DOUBLE, 0, structData.arrVertexes);
  glEnableClientState(GL_VERTEX_ARRAY);

  glClearColor(fon_r_, fon_g_, fon_b_, 0.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  // draw edges
  glLineWidth(0.1);
  if ((!line_r_) && (!line_g_) && (!line_b_)) {
    line_b_ = 0.9;
  }
  glColor3f(line_r_, line_g_, line_b_);
  if (ui->comboBox_edges_type->currentIndex() == 0) {
    glDisable(GL_LINE_STIPPLE);
  } else if (ui->comboBox_edges_type->currentIndex() == 1) {
    glLineStipple(10, 0x3333);
    glEnable(GL_LINE_STIPPLE);
  }
  glLineWidth(ui->spinBox_edges_size->value());
  glDrawElements(GL_LINES, structData.countE * 2, GL_UNSIGNED_INT,
                 structData.arrEdges);
  glDisableClientState(GL_VERTEX_ARRAY);

  // draw vertexes
  glLineWidth(0.1);
  if ((!dot_r_) && (!dot_g_) && (!dot_b_)) {
    dot_r_ = 0.9;
  }
  if (ui->vertexes_type->currentIndex() == 0) {
  } else {
    glEnableClientState(GL_VERTEX_ARRAY);
    glColor3f(dot_r_, dot_g_, dot_b_);

    if (ui->vertexes_type->currentIndex() == 1) {
      glEnable(GL_POINT_SMOOTH);
      glDrawArrays(GL_POINTS, 0, structData.countV);
      glDisable(GL_POINT_SMOOTH);
    } else if (ui->vertexes_type->currentIndex() == 2) {
      glDrawArrays(GL_POINTS, 0, structData.countV);
    }

    glDisable(GL_POINT_SMOOTH);

    glPointSize(ui->spinBox_vertexes_size->value());

    glDisableClientState(GL_VERTEX_ARRAY);
  }

  update();
}

void MainWindow::on_pushButton_mv_x_plus_clicked() {
  moving(&structData, ui->doubleSpinBox_mv_value->value(), 0);
  update();
}

void MainWindow::on_pushButton_mv_x_minus_clicked() {
  moving(&structData, ui->doubleSpinBox_mv_value->value() * -1, 0);
  update();
}

void MainWindow::on_pushButton_mv_y_plus_clicked() {
  moving(&structData, ui->doubleSpinBox_mv_value->value(), 1);
  update();
}

void MainWindow::on_pushButton_mv_y_minus_clicked() {
  moving(&structData, ui->doubleSpinBox_mv_value->value() * -1, 1);
  update();
}

void MainWindow::on_pushButton_mv_z_minus_clicked() {
  moving(&structData, ui->doubleSpinBox_mv_value->value() * -1, 2);
  update();
}

void MainWindow::on_pushButton_mv_z_plus_clicked() {
  moving(&structData, ui->doubleSpinBox_mv_value->value(), 2);
  update();
}

void MainWindow::on_pushButton_sc_all_plus_clicked() {
  double value = 1 + ui->doubleSpinBox_sc_all_value->value();
  scaling(&structData, value, ALL);
  update();
}

void MainWindow::on_pushButton_sc_x_plus_clicked() {
  double value = 1 + ui->doubleSpinBox_sc_x_value->value();
  scaling(&structData, value, X);
  update();
}

void MainWindow::on_pushButton_sc_y_plus_clicked() {
  double value = 1 + ui->doubleSpinBox_sc_y_value->value();
  scaling(&structData, value, Y);
  update();
}

void MainWindow::on_pushButton_sc_z_plus_clicked() {
  double value = 1 + ui->doubleSpinBox_sc_z_value->value();
  scaling(&structData, value, Z);
  update();
}

void MainWindow::on_pushButton_sc_all_minus_clicked() {
  double value = 1 - ui->doubleSpinBox_sc_all_value->value();
  if (value == 0) {
    value = 0.1;
  }
  scaling(&structData, value, ALL);
  update();
}

void MainWindow::on_pushButton_sc_x_minus_clicked() {
  double value = 1 - ui->doubleSpinBox_sc_x_value->value();
  if (value == 0) {
    value = 0.1;
  }
  scaling(&structData, value, X);
  update();
}

void MainWindow::on_pushButton_sc_y_minus_clicked() {
  double value = 1 - ui->doubleSpinBox_sc_y_value->value();
  if (value == 0) {
    value = 0.1;
  }
  scaling(&structData, value, Y);
  update();
}

void MainWindow::on_pushButton_sc_z_minus_clicked() {
  double value = 1 - ui->doubleSpinBox_sc_z_value->value();
  if (value == 0) {
    value = 0.1;
  }
  scaling(&structData, value, Z);
  update();
}

void MainWindow::on_pushButton_rt_x_plus_clicked() {
  affineTransforms(&structData, ui->doubleSpinBox_rt_value->value(), X);
  update();
}

void MainWindow::on_pushButton_rt_x_minus_clicked() {
  affineTransforms(&structData, ui->doubleSpinBox_rt_value->value() * -1, X);
  update();
}

void MainWindow::on_pushButton_rt_y_plus_clicked() {
  affineTransforms(&structData, ui->doubleSpinBox_rt_value->value(), Y);
  update();
}

void MainWindow::on_pushButton_rt_y_minus_clicked() {
  affineTransforms(&structData, ui->doubleSpinBox_rt_value->value() * -1, Y);
  update();
}

void MainWindow::on_pushButton_rt_z_plus_clicked() {
  affineTransforms(&structData, ui->doubleSpinBox_rt_value->value(), Z);
  update();
}

void MainWindow::on_pushButton_rt_z_minus_clicked() {
  affineTransforms(&structData, ui->doubleSpinBox_rt_value->value() * -1, Z);
  update();
}

void MainWindow::on_projection_type_activated() { update(); }

void MainWindow::on_vertexes_type_activated() { update(); }

void MainWindow::on_spinBox_vertexes_size_valueChanged() { update(); }

void MainWindow::on_spinBox_edges_size_valueChanged() { update(); }

void MainWindow::on_comboBox_edges_type_activated() { update(); }

void MainWindow::on_comboBox_edges_color_activated() { update(); }

void MainWindow::on_comboBox_background_color_activated() { update(); }

void MainWindow::on_pushButton_select_name_clicked() {
  QString str;
  str = QFileDialog::getOpenFileName(this, "Select File",
                                     "..\\3DViewer_v1-0\\objects\\");
  QFileInfo fileinfo(str);
  QString F = fileinfo.fileName();
  ui->label_object_name->setText(F);
  QByteArray ba = str.toLocal8Bit();
  char* c_str = ba.data();
  parser(&structData, c_str);
  ui->label_info_v->setNum(structData.countV);
  ui->label_info_e->setNum(structData.countE);
  ui->label_info_p->setNum(structData.countP);

  update();
}

void MainWindow::on_pushButton_save_settings_clicked() { saveSettings(); }

void MainWindow::on_pushButton_screenshot_clicked() {
  QFileDialog file_dialog_img(this);
  QString f_name = file_dialog_img.getSaveFileName(
      this, tr("Save a screenshot"), ".jpeg", tr("image (*.bmp *.jpeg)"));
  QImage img = grabFramebuffer();
  img.save(f_name);
}

void MainWindow::on_pushButton_gif_clicked() {
  gifFileName = QFileDialog::getSaveFileName(this, tr("Save GIF"), ".gif",
                                             tr("Gif Files (*.gif)"));
  if (gifFileName != "") {
    ui->pushButton_gif->setDisabled(true);
    gif_img_ = new QGifImage;
    gif_img_->setDefaultDelay(10);
    gif_timer();
  } else {
    error_message("Нет папки");
  }
}

void MainWindow::gif_timer() {
  gifTmr->setInterval(100);
  gifTmr->start();
}

void MainWindow::error_message(QString message) {
  QMessageBox messageBox;
  messageBox.setFixedSize(500, 200);
  messageBox.information(0, "Info", message);
}

void MainWindow::gif_creator() {
  QImage image = grabFramebuffer();
  gif_img_->addFrame(image);
  if (numberFps == 50) {
    gifTmr->stop();
    gif_img_->save(gifFileName);
    numberFps = 0;
    error_message("Gif saved.");
    gif_img_->~QGifImage();
    ui->pushButton_gif->setText("Gif");
    ui->pushButton_gif->setEnabled(true);
  }
  ++numberFps;
  if (!ui->pushButton_gif->isEnabled())
    ui->pushButton_gif->setText(QString::number(numberFps / 10));
}

// bgr color
void MainWindow::on_horizontalScrollBar_bgr_R_valueChanged(int value) {
  fon_r_ = ((double)value) / 100.0;
  update();
}

void MainWindow::on_horizontalScrollBar_bgr_G_valueChanged(int value) {
  fon_g_ = ((double)value) / 100.0;
  update();
}

void MainWindow::on_horizontalScrollBar_bgr_B_valueChanged(int value) {
  fon_b_ = ((double)value) / 100.0;
  update();
}

// edges color
void MainWindow::on_horizontalScrollBar_edges_R_valueChanged(int value) {
  line_r_ = ((double)value) / 100.0;
  update();
}

void MainWindow::on_horizontalScrollBar_edges_G_valueChanged(int value) {
  line_g_ = ((double)value) / 100.0;
  update();
}

void MainWindow::on_horizontalScrollBar_edges_B_valueChanged(int value) {
  line_b_ = ((double)value) / 100.0;
  update();
}

// vertexes color
void MainWindow::on_horizontalScrollBar_8_valueChanged(int value) {
  dot_r_ = (double)value / 100.0;
  update();
}

void MainWindow::on_horizontalScrollBar_9_valueChanged(int value) {
  dot_g_ = (double)value / 100.0;
  update();
}

void MainWindow::on_horizontalScrollBar_10_valueChanged(int value) {
  dot_b_ = (double)value / 100.0;
  update();
}
