#include <iostream>
using namespace std;

class Point {
public:
    float x, y;

    Point(float x = 0, float y = 0) {
        this->x = x;
        this->y = y;
    }
};

class Line {
public:
    Point start, end;

    Line(Point start, Point end) {
        this->start = start;
        this->end = end;
    }

    bool intersect(Line other, Point& intersection) {
        float x1 = start.x;
        float y1 = start.y;
        float x2 = end.x;
        float y2 = end.y;

        float x3 = other.start.x;
        float y3 = other.start.y;
        float x4 = other.end.x;
        float y4 = other.end.y;

        float denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);

        if (denominator == 0) {
            return false; // No intersection
        }

        float intersectX = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / denominator;
        float intersectY = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / denominator;

        intersection.x = intersectX;
        intersection.y = intersectY;

        return true;
    }
};

int main() {
    float ax, ay, bx, by, cx, cy, dx, dy;
    
    cout << "Nh?p t?a d? di?m A: ";
    cin >> ax >> ay;

    cout << "Nh?p t?o d? di?m B: ";
    cin >> bx >> by;

    cout << "Nh?p t?a d? di?m C: ";
    cin >> cx >> cy;

    cout << "Nh?p t?a d? di?m D: ";
    cin >> dx >> dy;

    Point A(ax, ay);
    Point B(bx, by);
    Point C(cx, cy);
    Point D(dx, dy);

    Line AB(A, B);
    Line CD(C, D);

    Point intersection;
    bool hasIntersection = AB.intersect(CD, intersection);

    if (hasIntersection) {
        cout << "Ði?m giao c?a du?ng th?ng AB và du?ng th?ng CD là: " << intersection.x << ", " << intersection.y << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

