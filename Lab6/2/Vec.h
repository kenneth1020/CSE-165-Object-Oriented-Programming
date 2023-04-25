#ifndef VEC_H
#define VEC_H
#include <iostream>
using namespace std;

class Vec {
public:
    float x;
    float y;
    const static Vec null;

    Vec() {
        x = 0;
        y = 0;
    }

    Vec(float x_position, float y_position) {
        x = x_position;
        y = y_position;
    }

    float getX() {
        return x;
    }

    float getY() {
        return y;
    }

    void add(Vec &vector) {
        x += vector.x;
        y += vector.y;
    }

    void print() {
        cout << "< " << x << ", " << y << " >" << endl;
    }

};
const Vec Vec::null(0.0f,0.0f);
#endif