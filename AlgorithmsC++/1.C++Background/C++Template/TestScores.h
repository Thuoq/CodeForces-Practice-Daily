#ifndef TESTSCORES_H
#define TESTSCORES_H
template<class T>
class TestScores {
    private: 
        int size;
        T *scores;
    public:
        TestScores();
        TestScores(int);
        void input();
        double average();
};
#include "TestScores.cpp"
#endif