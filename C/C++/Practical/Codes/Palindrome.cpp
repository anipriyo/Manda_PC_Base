// Checking if a number is a palindrome 
#include<iostream>
using namespace std;
class element {
    private:
        int num;
    public:
        void set(int n){
            num=n;
    }
        void check(){
            int cpy, rev = 0, r;
            cpy = num;
            while (cpy > 0)
            {
                r = cpy % 10;
                rev = rev * 10 + r;
                cpy = cpy / 10;
            }
            if (rev == num)
                cout << "The number is a palindrome";
            else
                cout << "The number is not a palindrome";
        }
};
int main(){
element object;
int n;
cout << "Enter a number :";
cin >> n;
object.set(n);
object.check();

return 0;
}