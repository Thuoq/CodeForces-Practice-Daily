#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x));
typedef pair<int,int> p;
typedef vector<pair<int,int> > vi_p; 

void solution(vi_p segments , p woods) {
    int i = 1; 
    int j = 1;
    int _max = max(woods.first,woods.second);
    int count[_max];
    clr(count);
    count[0]=1;
    while (i <= woods.first or j <= woods.second )    
    {
        for(auto seg: segments) {
            if(i - seg >= 0) {
                
            }
            if(i - seg >= 0 and j - seg >= 0) {
                count[i] = 
            }
        }
        j++;
        i++;
        /* code */
    }
    
}
int main() {
    int n ;
    cin >> n;
    vi_p segments(n,{0,0});
    for(auto &el : segments) {
        cin >> el.first >> el.second;
    }
    p woods;
    cin >> woods.first >> woods.second;

}