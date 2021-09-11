#include "Point.h"
using namespace std;
double distance(Point p1, Point p2) {
    return hypot(p1.x-p2.x ,p1.y-p2.y);
}

int main() {
    //vector<Point<int> > a;
    Point p1(10,3);
    // Point<int> p2(5,5);
    // Point<int> p3(5,5);
    // a.push_back(p1);
    // a.push_back(p2);
    // a.push_back(p3);
    // cout << (p2  == p3) << endl;
    // cout << (p1 < p2) << endl;
    // // SORT BY X coordinate
    // sort(a.begin(),a.end());
    // // distance Euclidean
    // cout << distance(a[0],a[1]) << endl;

    Point tmp = p1.rotation(90);
    cout << tmp.x << " "  << tmp.y << endl;

}