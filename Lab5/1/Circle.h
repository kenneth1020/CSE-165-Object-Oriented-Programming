/*
Create a C++ class named Circle, which you should store in a file called Circle.h. Your class should have three
private variables, namely x, y, and r, all of type double. The variables x and y will store the Cartesian position of
the center of the circle and the variable r should store the radius. You should also add a public variable, area, which
will store the area of the circle. There should be two constructors, one that takes no arguments and instantiates a
unit circle centered at the origin. The second constructor should take in three arguments, namely x, y and r, and
instantiate a circle of radius r, centered at (x, y). There should be getters and setters for all the private variables.
Your code will be tested with the circles.cpp file.
*/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>
#include <iostream>

using namespace std;

class Circle{
  private:
  double x;
  double y;
  double r;  

 public:
    double area;
    double pi = M_PI;

    Circle(){
        x = 0;
        y = 0;
        r = 1;
        area = pi * pow(r, 2);
    }

    Circle(double centerX, double centerY, double radius){
        x = centerX;
        y = centerY;
        r = radius;
        area = pi * pow(r,2);
    }

    void setX(double readX){
        x = readX;
    }
     void setY(double readY){
        y = readY;
    }
     void setR(double readR){
        r = readR;
    }

    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getR(){
        return r;
    }

};
#endif