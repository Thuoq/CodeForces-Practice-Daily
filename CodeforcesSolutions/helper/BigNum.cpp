#include<iostream>
#include<string>
using namespace std;
class BigNum {
    private:
        string num;
        void balanced(string &num2) {
            if(this->num.size() > num2.size()) {
                num2=string(num.size()-num2.size(),'0')+num2;
            }else {
                num=string(num2.size()-num.size(),'0')+num;
            }
        }
    public: 
        BigNum(string num) {
            this->num = num;
        }
        string operator +(BigNum &ortherNum) {
            string num2 = ortherNum.getNum();
            this->balanced(num2);
            string ans = "";
            int remember = 0;
            for(int i = num.size()-1; i >= 0; i --) {
                int temp = num[i] -'0' + num2[i]-'0' + remember;
                remember = temp/10;
                char next = ('0' + temp%10);
                ans= next+ans;
            }
            if (remember > 0) {
                ans = '1' +ans;
            }
            return ans;
        }
        // Getter 
        string getNum() {
            return this->num;
        }

};
int main() {
    BigNum num1("999");
    BigNum num2("22");
   
    cout << num1 + num2 << endl;

}