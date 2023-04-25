#include <iostream>
#include "Rect.h"
#include "RectStash.h"
#include "Vec.h"

using namespace std;

int main() {
    bool truth = true;
    float a;
    float b;
    float c;
    float d;
    RectStash stash;
    Rect* rectangle;
    Vec vector;
    //square reading
    while (truth == true) {
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        //if all number are less than 0 then break the loop
        if (a < 0 && b < 0 && c < 0 && d < 0) {
            truth = false;
            break;
        }
        else {
            rectangle = new Rect(a, b, c, d);
            stash.add(rectangle);
        }
    }
    //activate the loop again
    truth = true;
    //reading in the vector and check in the sqaure
    while (truth == true) {
        cin >> a;
        cin >> b;
        vector = Vec(a, b);
        if (a == -99 && b == -99){ 
            truth = false;
            break;
        }
        else {
            for (int i = 0; i < stash.count(); i++) {
                rectangle = (Rect*)(stash.fetch(i));
                //rectangle -> print();
                if (rectangle->contains(vector))
                    cout << "in ";
                else
                    cout << "out "; 
            }
            cout << endl;
        }
    }

}