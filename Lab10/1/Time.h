#include <iostream>

using namespace std;

class Time {

    int hour, minute, seconds;

public:
    Time() {
        hour = 0;
        minute = 0;
        seconds = 0;
    }

    Time(int h, int m, int s) {
        this->hour = h;
        this->minute = m;
        this->seconds = s;
    }

    Time operator +(Time const &t){
        Time temp = Time(hour, minute, seconds);

        temp.hour += t.hour;
        temp.minute += t.minute;
        temp.seconds += t.seconds;

        int tMin = temp.seconds / 60;
        temp.minute += tMin;
        temp.seconds -= tMin * 60;

        int tHour = temp.minute / 60;
        temp.hour += tHour;
        temp.minute -= tHour * 60;

        return temp;
    }

    void print() {
        cout << hour << " hours, " << minute << " minutes, " << seconds << " seconds" << endl;
    }

};