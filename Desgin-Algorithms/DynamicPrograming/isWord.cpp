#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class IsWordSolution {
    private: 
  
        bool compareWithDict(string word)
        {
            // compare all word with dictionary
            for (int i = 0; i < dictionaries.size(); i++)
            {
                if (!dictionaries[i].compare(word))
                {
                    return true;
                }
            }
            return false;
        }
        void readingSources(string fileName)
        {
            ifstream f(fileName);
            string str;
            while (getline(f, str))
            {
                dictionaries.push_back(str);
            }
        }
    public:
        vector<string> dictionaries;
        IsWordSolution() {
            // initialize constructor
            // readfile
            this->readingSources("1000word.txt");
        }
        bool dict(string word) {
            int size= word.size();
            // base case
            if(size == 0) return true;
            // subStr minust from i -> size-i ; and compare with dictionaries
            for(int i = 1 ; i <= size ; i ++) {
                if(compareWithDict(word.substr(0,i)) && dict(word.substr(i,size-i))) {
                    cout << word.substr(0,i) << " ";
                    return true;
                }
            }
            return  false;
        }
};
int main() {
    IsWordSolution s1;
    string test_string;
    cin >> test_string;
    s1.dict(test_string) ? cout << "\nYES" : cout <<  "NO";
}