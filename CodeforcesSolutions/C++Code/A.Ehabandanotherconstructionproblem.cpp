    // Link Problem: https://codeforces.com/problemset/problem/1088/A?fbclid=IwAR1-BEebijVQ1I72fCDYl-k_eq7YL_q3KLQolmeueXi-Tn-1V26CaeVyfcA
    #include<iostream>
    using namespace std;
    bool condition(int a, int b,int x) {
        return a % b == 0 and a*b  > x and (a/b) < x;
    }
    void solution(int num) {
                
        for(int a = 1;  a <= num ; a ++) {
            for(int b =  1;  b <= num ; b ++) {
                if(condition(a,b,num)) {
                    cout << a << " " << b;
                    return;
                }
            }
        }
    
        cout << -1 << endl;
    
        
    }
    int main() {
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
        int x; 
        cin >>x;
        solution(x);
    }
