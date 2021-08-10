#include<iostream>
using namespace std;
int main() {
    char names[1000] = "thuong ";
    char anotherName[1000];
    char bestName[1000] ="thuong ";
    // cout actual len of characters;
    cout << strlen(names) << endl;

    // strcpy
    strcpy(anotherName,names); // coppy from names to anotherName

    cout << anotherName << endl;
    // Compare
    cout << strcmp(anotherName,names) << endl;

    cout << strcmp(bestName,names) << endl;
    // concat a characters

    char web[] ="www.";
    char domain[]="cownut.com";
    cout << strcat(web,domain) << endl;
    return 0;
}