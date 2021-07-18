#include<vector>
using namespace std;
class DisjointSet {
    private: 
        vector<int> s;
    public: 
        DisjointSet(int);
        int find(int) const;
        int find(int);
        void unionSets(int ,int);
};