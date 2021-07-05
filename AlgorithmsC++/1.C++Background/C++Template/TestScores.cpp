#ifndef TESTSCORES_CPP
#define TESTSCORES_CPP
#include"TestScores.h"
#include<iostream>
using namespace std;
template<class T>
TestScores<T>::TestScores(int size) {
    this->scores = new T[size];
    this->size = size;
}
template<class T>
double TestScores<T>::average() {
    T sum = 0;
    for(int i = 0 ;i < this->size ; i ++) {
        sum += this->scores[i];
    }
    return (T)sum/this->size;
}
template<class T>
void  TestScores<T>::input() {
    for(int i = 0 ; i < this->size ; i ++) {
        T a;
        cin >> a;
        this->scores[i] = a;
    }
}
#endif