#include <iostream>
using namespace std;

class Point {
   public:
    int x;
    int y;
};

class Rect {
public:
    Point TL;  // top-left
    Point BR;  // bottom-right

    void computeArea() {
        cout << abs(TL.x - BR.x) * abs(BR.y - TL.y) << endl;
    }
};

int main() {
    Rect r = { {2, 3}, {3, 4} };
    r.computeArea();
}