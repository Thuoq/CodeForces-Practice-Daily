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