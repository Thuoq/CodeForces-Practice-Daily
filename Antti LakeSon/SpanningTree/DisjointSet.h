#include<bits/stdc++.h>
typedef vector<pair<int,int> > vi_p;
class DisjointSet  {
    private:
        vi_p s;
    public:
        /**
         * Constructor the Disjoinset Object set all element with length by -1;
         * @param numElements: init length number;
         */
        DisjointSet(int numElements) {
            this->s.push_back({0,0});
            for(int i = 0 ; i < numElements-1; i ++) {
                this->s.push_back({i+1,1});
            }
        }
        /** Finding the root 
         * @param x:  is node need find the root
         * @return Root of x
         */
        int find(int x ) {
            if(this->s[x].first == x) {
                return x;
            }
            return this->find(s[x].first);
        }
        /** Connected two root in to a root by suze
         * @param s1: element in root 1
         * @param s2: element in root 2
         */
        void union_Set(int s1, int s2) {
            int r1,r2;
            r1 = this->find(s1); // get root 1
            r2 = this->find(s2); // get root 2
            //cout << r1 << " " << r2 << endl;
            if(r1 == r2) { 
                return;
            } 
            if(this->s[r1].second >= this->s[r2].second) {
                this->s[r1].second = this->s[r1].second+ this->s[r2].second;
                this->s[r2].first = this->s[r1].first;
            }else {
                this->s[r2].second = this->s[r1].second+ this->s[r2].second;
                this->s[r1].first = this->s[r2].first;
            }
           
        } 
        void print() {
           
            for(int i = 1 ; i < this->s.size() ; i ++) {
                cout << this->s[i].first << " "<< this->s[i].second << endl;;
            }
        }
};