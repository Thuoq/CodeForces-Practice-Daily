#include<iostream>
#include<vector>
#include <utility>
using namespace std;
typedef long long int ll_i;
typedef pair<ll_i,int> p_l;
typedef vector<vector<ll_i>> vi_vi;
typedef vector<ll_i> vi;
typedef vector<p_l> vi_pair;
void solution(vi_vi monters) {

}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int caves;
        cin >> caves;
        vi_vi monters;
        for(int i = 0 ; i < caves; i ++) {
            int number;
            cin >> number;
            vi tmp;
            for(int j = 0 ; j < number;j ++){
                int _;
                cin >> _;
                tmp.push_back(_);
            }
            monters.push_back(tmp);
        }


    }
    
}