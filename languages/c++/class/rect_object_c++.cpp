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
};

int main() {
    Rect r = { {2, 4}, {3, 4} };
}