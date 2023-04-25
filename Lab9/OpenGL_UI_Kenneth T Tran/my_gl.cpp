#include "my_gl.h"

MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent)
{
    xrot = yrot = zrot = 0.0;
    xtrans = ytrans = ztrans = 0.0;
}

void MyGL::initializeGL()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
}

void MyGL::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -7.0);
    glRotatef(xrot, 1.0, 0.0, 0.0);
    glRotatef(yrot, 0.0, 1.0, 0.0);
    glRotatef(zrot, 0.0, 0.0, 1.0);

    glTranslatef(0.0, 0.0, 0.0);
    glTranslatef(xtrans / 35, 0.0, 0.0);
    glTranslatef(0.0, ytrans / 35, 0.0);
    glTranslatef(0.0, 0.0, ztrans / 35);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0, 0.5, 0.3);
    glVertex3f(-0.5, -0.5, 0.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.5, -0.5, 0.5);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.5, 0.5);

    glColor3f(0.1, 0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.5, 0.5);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0, 0.1, -0.5);

    glColor3f(0.0, 1.0, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glColor3f(0.6, 0.4, 0.2);
    glVertex3f(0.0, 0.5, 0.5);
    glColor3f(0.6, 0.4, 0.2);
    glVertex3f(0.0, 0.1, -0.5);

    glColor3f(0.2, 0.2, 1.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glColor3f(0.5, 0.7, 0.9);
    glVertex3f(0.5, -0.5, 0.5);
    glColor3f(1.0, 1.0, 0.1);
    glVertex3f(0.0, 0.1, -0.5);

    glEnd();
    glFlush();
}

void MyGL::resizeGL(int w, int h)
{
    //set viewport
    glViewport(0,0,w,h);

    //initialize projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /* multiply the current matrix by a perspective matrix
     * void glFrustum(GLdouble left, GLdouble right,GLdouble bottom,GLdouble top,GLdouble nearVal,GLdouble farVal);
     * left, right: Specify the coordinates for the left and right vertical clipping planes.
     * bottom, top: Specify the coordinates for the bottom and top horizontal clipping planes.
     * nearVal, farVal: Specify the distances to the near and far depth clipping planes. Both distances must be positive.
     */
    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

    //initialize modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void MyGL::setRotation(float x, float y, float z)
{
    xrot = x;
    yrot = y;
    zrot = z;
    update();
}

void MyGL::setTranslation(float x, float y, float z)
{
    xtrans = x;
    ytrans = y;
    ztrans = z;
    update();
}


