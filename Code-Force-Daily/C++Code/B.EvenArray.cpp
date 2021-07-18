// Linkproblem: https://codeforces.com/problemset/problem/1367/B

#include <iostream>
using namespace std;

void solution() {
    int n;
    cin >> n; 
    int arr[n];
    int countOddNumber = 0;
    int countEvenNumber = 0;
    
    for(int j = 0 ; j < n ; j ++) {
        cin >> arr[j];
        if (j % 2 != arr[j] % 2)
			{
				if (j % 2 == 0)
				{
					countEvenNumber++;
				}
				if (j % 2 == 1)
				{
					countOddNumber++;
				}
            }

    }
    if(countEvenNumber == countOddNumber) {
        cout << countEvenNumber << endl;
    }else {
        cout << -1<< endl;
    }
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int test;
    cin >> test;    
    while (test--)
    {
       solution();
    }
}