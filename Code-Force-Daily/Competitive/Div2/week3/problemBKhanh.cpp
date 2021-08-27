#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include<utility>

#include <vector>
using namespace std;

bool isPrime(int x ) 
{
    if(x == 1) {
        return false;
    }
    if (x==2) {
        return true;
    }
    for(int i= 2 ; i <= sqrt(x); i ++){
        if(x % i == 0 ) {
            return false;
        }
    }
    return true;
}
void solution(vector<char> vi_pair) {
        for(int i = 0; i < vi_pair.size() ; i ++) {
                for(int j = 1 ; j < vi_pair.size() ; j ++) {
                    string ans = "";
                    ans += vi_pair[i];
                    ans += vi_pair[j];
                    if(!isPrime(atoi(ans.c_str()))) {
                        cout << ans.size() << endl;
                        cout << ans << endl;
                        return;
                    }
                }
            }
}
int main() {
  int test;
	cin >> test;
	vector<int> check(10,0);
	map<int,int>prime;
	
	check[7] = 1;
    check[3] = 1;
    check[5] = 1;
    check[2] = 1;
	for(int i =0; i< test;i ++)
	{
		bool check1 = false;
		int size;
		cin >> size;
		string num;
		cin >> num;
        vector<char > vi_pair;
		for(int j = 0; j < num.size();j++)
		{
			int temp = num[j] - '0';
			if(check[temp] == 0)
			{
				cout << 1 << endl;
				cout << temp << endl;
				check1 = 1;
				break;
			}
			else
			{
				vi_pair.push_back(num[j]);
			}
		}
		if(check1 == 0)
		{
			solution(vi_pair);
		}
	}
}