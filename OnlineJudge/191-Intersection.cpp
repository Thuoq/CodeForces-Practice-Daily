// Link problem:https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=127&fbclid=IwAR3UM-2yLVWcjJdyZmcegTYYcLZVzxWrzG1NV71Ynj07aI54C09TN48BTRA
#include<bits/stdc++.h>
using namespace std;
class Point { 
    private:
        double degToRad(double theta) {
            return (theta*M_PI)/180.0;
        }
    public:
        double x;
        double y;
        double EPS = 1e-9;
        Point(double _x = 0, double _y = 0) {
          
            this-> x =  _x;
            this->y = _y;
        }
        /** Compare make sort overload operator <
         *  @param orther  Point<T> orther
         *  @return boolean  
         */
        bool operator < (Point orther) const {
            if(fabs(this->x - orther.x) > this->EPS) { // check coordinate x;
                return x < orther.x;
            }
            return this->y < orther.y;// check coordinate y;
        }
        /** Compare make the same point
            @param orther  Point<T> orther
         *  @return bool equal or not  
         */
        bool operator == (Point orther) const {
            return fabs(this->x - orther.x) < this->EPS and fabs(this->y - orther.y) < this->EPS;
        }
        /** Rotation in Point
         *  @param theta: double like 60.0,90
         *  @return A new Point
         */
        Point rotation(double theta) {
            double rad = this->degToRad(theta);
            double newX = this->x * cos(rad) - this->y*sin(rad) ;
            double newY = this->x*sin(rad) + this->y*cos(rad) ;
       
            return Point(newX,newY);
        }
};
class Line { 
    public:
        double a,b,c;
        double EPS = 1e-9;
        /*  */
        Line(Point p1,Point p2) {
            if(fabs(p2.x - p1.x) < this->EPS)  {
                this->a = p2.y - p1.y;
                this->b = 0;
                this->c = -p1.x*(this->a);
            }
            else if (fabs(p2.y-p1.y) < this->EPS) {
                this->a = 0;
                this->b = -(p2.x-p1.x);
                this->c = p1.y*(p2.x-p1.x);
            }else {
                this->a = -(double)(p1.y-p2.y)/(p1.x-p2.x);
                this->b= 1.0;
                this->c = -(double)(this->a*p1.x)-p1.y;
            }
        }
        /** Check 1 đường thẳng song song 
         *  @param ortherLine: Đường thẳng khác
         *  @return Song song (Parallel) or nor
         */
        bool areParallel(Line ortherLine) {
            return (fabs(this->a- ortherLine.a) < this->EPS and (fabs(this->b-ortherLine.b)< this->EPS));
        }
        /** Check 1 đường thẳng  trùng nhau
         * @param ortherLine: Đường thẳng khác
         * @return Trùng (The Same) or nor
         */
        bool areTheSame(Line ortherLine) {
            return this->areParallel(ortherLine) and (fabs(this->c - ortherLine.c));
        }
        /** Check 1 đường thẳng cắt 
         * @param ortherLine: Đường thẳng khác
         * @return Trùng (The cắt) or nor
         */
        bool areIntersect(Line ortherLine) {
            return !this->areParallel(ortherLine);
        }
};
int main() {
    int  t;
    cin >> t;
    while (t--)
    {
        double x_P_1,y_P_1,x_P_2,y_P_2,x_A,y_A,x_C,y_C;
        cin >> x_P_1 >> y_P_1 >> x_P_2 >> y_P_2 >> x_A >> y_A >> x_C >> y_C;
        double x_B = x_C,y_B =y_A,x_D=x_A,y_D=y_C;
        Point A(x_A,y_A),B(x_B,y_B),C(x_C,y_C),D(x_D,y_D),X(x_P_1,y_P_1),Y(x_P_2,y_P_2);
        Line AC(A,C),BD(B,D),XY(X,Y);
        
        if(XY.areIntersect(AC) or XY.areIntersect(BD)) {
            cout << "T" << endl;
        }else {
            cout << "F" << endl;
        }
    }
    
}