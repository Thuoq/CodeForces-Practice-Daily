#include<iostream>
#include<unordered_map>
using namespace std;
typedef unordered_map<int,int> m_i;
typedef long long int ll_i;
int memo[1000000] = {0};
ll_i digist(int a) {
    if(memo[a]) {
        return memo[a];
    }
    memo[a] = memo[a%10] + digist(a/10);
    return memo[a];
}

int main() {
    memo[0] =6;
    memo[1]=2;
    memo[2]=5;
    memo[3]=5;
    memo[4]=4;
    memo[5]=5;
    memo[6]=6;
    memo[7]=3;
    memo[8]= 7;
    memo[9]=6;
    int a,b;
    cin >> a >> b;
    int sum = 0;
    for(int i = a ; i <= b; i ++) {
        sum+=digist(i);
    }
    cout << sum << endl;
    
}