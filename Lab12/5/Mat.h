#include <iostream>
#include "Vec.h"
using namespace std;

class Mat {
public:
    float a, b, c, d;
    static Mat Identity;

    Mat(){
        this->a = 0.0f;
        this->b = 0.0f;
        this->c = 0.0f;
        this->d = 0.0f;
    }

    Mat(float a, float b, float c, float d){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    Mat operator + (const Mat & m){
        return Mat(this->a + m.a, this->b + m.b, this->c + m.c, this->d + m.d);
    }

    Mat operator- (const Mat & m){
        return Mat(this->a - m.a, this->b - m.b, this->c - m.c, this->d - m.d);
    }

    Mat operator* (const Mat & m){
        return Mat(this->a*m.a + this->b*m.c, 
        this->a*m.b + this->b*m.d, 
        this->c*m.a + this->d*m.c, 
        this->c*m.b + this->d*m.d);
    }

};
    Vec operator*(const Vec & v, const Mat & m){
        return Vec(v.x*m.a + v.y*m.c, v.x*m.b + v.y*m.d);
    }

    Mat operator* (float z, const Mat& m){
        return Mat(m.a*z, m.b*z, m.c*z, m.d*z);
    }

    Mat Mat::Identity(1.0f, 0.0f, 0.0f, 1.0f);
