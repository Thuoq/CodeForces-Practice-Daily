// Link Problem: https://codeforces.com/problemset/problem/785/A
#include<iostream>
#include<string>
#include<map>

using namespace std;
int main() {
    int n ;
    map<string, int> gquiz1;
    gquiz1.insert(pair<string, int>("Tetrahedron",4));
    gquiz1.insert(pair<string, int>("Cube",6));
    gquiz1.insert(pair<string, int>("Octahedron", 8));
    
    gquiz1.insert(pair<string, int>("Dodecahedron", 12));
    gquiz1.insert(pair<string, int>("Icosahedron", 20));
    cin >> n;
    int sum = 0;
    while(n) {
        string polyhedron;
        cin >> polyhedron;
        sum += gquiz1[polyhedron];
        n--;
    }
    cout << sum;
}