#include "Point.h"
using namespace std;

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
            return (fabs(this->a- ortherLine.a) < this->EPS and (fabs(this->b-ortherLine.b)< this->EPS))
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