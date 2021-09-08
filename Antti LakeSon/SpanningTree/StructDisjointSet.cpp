#include<bits/stdc++.h>
using namespace std;
struct UnionFind { 
    private:
        int *p;
        int *size;
        int n;
    public:
        UnionFind(int n) {
            this->p = new int[n];
            this->size = new int[n];
            for(int i = 1; i <= n ; i ++) {
                this->p[i] =i;
                this->size[i]=1;
            }
            this->n = n;
        }
        int find(int x) {
            if(this->p[x] == x) {
                return x;
            }
            return find(this->p[x]);
        }
        void union_sets(int s1,int s2) {
            int r1,r2;
            r1 = this->find(s1);
            r2 = this->find(s2);
            if(r1 == r2) {
                return;
            }
            if(this->size[r1] >= this->size[r2]) {
                this->size[r1] =this->size[r2] + this->size[r1];
                this->p[r2] = this->p[r1]; 
            }else {
                this->size[r2] =this->size[r2] + this->size[r1];
                this->p[r1] = this->p[r1]; 
            }
        }
        void print() {
            for(int i = 1 ; i <=this->n ; i ++) {
                cout << this->p[i] << " "<< this->size[i] << endl;
            }
        }
        bool same_component(int s1,int s2) {
            return this->find(s1) == this->find(s2);
        }
};
int main() {
    UnionFind k(7);
    k.union_sets(3,5);
    k.union_sets(4,6);
    k.union_sets(4,2);
    k.union_sets(2,7);
    k.print();

}