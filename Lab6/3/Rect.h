#ifndef RECT_H
#define RECT_H
#include <iostream>
#include "Vec.h"
using namespace std;

class Rect {

public:

    float x;
    float y;
    float width;
    float height;

    Rect() {
        x = 0;
        y = 0;
        width = 0;
        height = 0;
    }

    Rect(float a, float b, float c, float d) {
        x = a;
        y = b;
        width = c;
        height = d;
    }

    bool contains(Vec v) {
        return (v.x >= x) && (v.x <= x + width) && (v.y <= y) && (v.y >= y - height);
    }  
};
#endif