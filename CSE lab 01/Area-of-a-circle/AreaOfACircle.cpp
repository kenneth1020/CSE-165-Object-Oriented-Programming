#define _USE_MATH_DEFINES
 
#include <cmath>
#include <iostream>
using namespace std;

double AreaCircle(double);

int main() {
  cout << "What is the radius of the circle?" << endl;
  double radius;
  cin >> radius;
  double area;
  area = AreaCircle(radius);
  cout << "Area of the circle: " << area ;
  return 0;
}

double AreaCircle (double radius){
  double area;
  area = M_PI * radius * radius;
  return area;
}