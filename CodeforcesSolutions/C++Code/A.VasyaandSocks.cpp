#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		if (i%m == 0) { n++; }
	}
	cout << n;
	return 0;
}