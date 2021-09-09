#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

void slove(string s){	
	int cnt2 = 0;
	vi pos;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '2'){
			cnt2++;
			pos.push_back(i);
		}
	}
	if(cnt2 > 0 && cnt2 <= 2){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	
	for(int i = 0; i < s.size(); i++){
		for(int j = 0; j < s.size(); j++){
			if(i == j)
				cout << "X";
			else if(s[i] == '1' && s[j] == '1')
				cout << "=";
			else if(s[i] == '1' && s[j] == '2')
				cout <<"+";
			else if(s[i] == '2' && s[j] == '1')
				cout <<"-";
			else if(s[i] == '2' && s[j] == '2'){
				auto p = find(pos.begin(), pos.end(), i);
				if(j == pos[(p - pos.begin() + 1) % pos.size()])
					cout << "+";
				else
					cout << "-" ;
			}
		}
		cout << endl;
	}
}

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 int test;
 cin >> test;
 while(test--){
	 int size;
	 cin >> size;
	string s;
	cin >> s;
	slove(s);
 } 
}