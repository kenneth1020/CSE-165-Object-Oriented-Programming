#ifndef header_h
#define header_h

#include <iostream>

using namespace std;

class AppRect
{
public:
    int x, y, w, h;

    AppRect(int x, int y, int w, int h)
    {
        this->x = x;
        this->y = y;
        this->w = w;
        this->h = h;
    }
    AppRect()
    {
        x = 0;
        y = 0;
        w = 0;
        h = 0;
    }
};

class AppWindow{
private:
    AppRect rec;

public:
    AppWindow(int x, int y, int w, int h)
    {
        rec.x = x;
        rec.y = y;
        rec.w = w;
        rec.h = h;
    }
    AppWindow(const AppRect &temp)
    {
        rec = temp;
    }

    virtual void resize(int w, int h)
    {
        this->rect().w = w;
        this->rect().h = h;
    }
    AppRect& rect()
    {
        return rec;
    }
};

class CircleWin : public AppWindow
{
private:
    int rad;

public:
    CircleWin(int x, int y, int w, int h) : AppWindow(x, y, w, h)
    {
        rad = min(w, h);
    }

    CircleWin(const AppRect &rec) : AppWindow(rec)
    {
        rad = min(rec.w, rec.h);
    }

    void resize(int w, int h)
    {
        rad = min(w, h);
        cout << "Radius: " << rad << endl;
    }
};

class RectWin : public AppWindow
{
private:
    int w, h;

public:
    RectWin(int x, int y, int w, int h) : AppWindow(x, y, w, h)
    {
        this->w = w;
        this->h = h;
    }

    RectWin(const AppRect &rec) : AppWindow(rec)
    {
        w = rec.w;
        h = rec.h;
    }

    void resize(int w, int h)
    {
        this->rect().w = w;
        this->rect().h = h;
        cout << "Area: " << w * h << endl;
    }
};
#endif