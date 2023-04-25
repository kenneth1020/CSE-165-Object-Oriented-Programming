#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QOpenGLWindow()
{
    setSurfaceType(QWindow::OpenGLSurface);

    QSurfaceFormat format;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2,1);
    setFormat(format);

    context = new QOpenGLContext;
    context->setFormat(format);
    context->create();
    context->makeCurrent(this);

    openGLFunctions = context->functions();

    //QTimer *timer = new QTimer(this);
    //    connect(timer, SIGNAL(timeout()),this, SLOT(UpdateAnimation()));
    //    timer->start(100);
    //    rotation = 0;

    xtrans = 0;
    ytrans = 0;
    ztrans = 0;

    xrot = 0;
    yrot = 0;
    zrot = 0;
}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    //glEnable — enable or disable server-side GL capabilities
    glEnable(GL_DEPTH_TEST);
    resizeGL(this->width(),this->height());
}

void MainWindow::resizeGL(int w, int h)
{
    //set viewport
    glViewport(0,0,w,h);
    qreal aspectratio = qreal(w)/qreal(h);

    //initialize projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /* Sets up a perspective projection matrix
     * void gluPerspective(	GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
     * fovy: Specifies the field of view angle, in degrees, in the y direction.
     * aspect: Specifies the aspect ratio that determines the field of view.
     * zNear: Specifies the distance from the viewer to the near clipping plane (always positive)
     * zfar: Specifies the distance from the viewer to the far clipping plane (always positive).
     */
    gluPerspective(75,aspectratio, 0.1, 400000000);

    //initialize modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void MainWindow::paintGL()
{
    //removing previous frame
    glClearColor(0.5f,0.5f,0.5f,1.f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //Reset modelview matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //3D transformation

    glTranslatef(xtrans,ytrans,0);
    glRotatef(xrot, 1.0f,0,0);
    glRotatef(yrot, 0,1.0f,0);
    glRotatef(zrot, 0,0,1.0f);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.5, -0.5, 0.5);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.0, 0.5, 0.5);

    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.5, 0.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.1, -0.5);

    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.5, -0.5, 0.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 0.5, 0.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 0.1, -0.5);

    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.5, -0.5, 0.5);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 0.1, -0.5);

    glEnd();

    /* glFlush() forces all the issued command to be executed
    *  as quickly as they are accepted by rendering engine
    */
    glFlush();

}

void MainWindow:: mousePressEvent(QMouseEvent *event) {
    if(event -> buttons() == Qt::LeftButton){                //checks if mouse has been clicked or not
        lastX = event -> x();
        lastY = event -> y();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    if(event -> buttons() == Qt::LeftButton){                //checks if mouse has been clicked or not

        float xAtRelease = event -> x();
        float yAtRelease = event -> y();

        float dx = xAtRelease - lastX;                      //distance moved in x direction
        float dy = yAtRelease - lastY;                      //distance moved in y direction

        xtrans += dx/300;
        ytrans += -dy/300;

        update();

        lastX = event -> x();
        lastY = event -> y();
    }
}

void MainWindow:: keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_Up) ytrans += 5.0/75;
    if(event->key() == Qt::Key_Down) ytrans -= 5.0/75;
    if(event->key() == Qt::Key_Left) xtrans -= 5.0/75;
    if(event->key() == Qt::Key_Right) xtrans += 5.0/75;
    if(event->key() == Qt::Key_W) xrot += 5.0;
    if(event->key() == Qt::Key_S) xrot -= 5.0;
    if(event->key() == Qt::Key_A) yrot -= 5.0;
    if(event->key() == Qt::Key_D) yrot += 5.0;
    if(event->key() == Qt::Key_Q) zrot -= 5.0;
    if(event->key() == Qt::Key_E) zrot += 5.0;

    update();
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    resizeGL(this->width(),this->height());
    this->update();
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    paintGL();
}

