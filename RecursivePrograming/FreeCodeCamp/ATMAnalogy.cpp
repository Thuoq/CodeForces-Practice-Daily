#include<iostream>
using namespace std;
struct Person  {
    Person *nextLine;
};
int countLine(Person *person) {
    // base case
    if(person->nextLine == nullptr) {
        return 1;
    }
    return 1 + countLine(person->nextLine);
}
int main() {
    Person *test1,*test2;
    test1 = new Person();
    test2 = new Person();
    test1->nextLine = test2;

    cout << countLine(test1);
}