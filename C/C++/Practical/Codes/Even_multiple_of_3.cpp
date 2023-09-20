// Even Multiple of 3 check 
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
            if (num%3==0 && num%2==0)
            {
                cout << "The number is an even multiple of 3";
            }
            else
            {
                cout << "The number is not an even multiple of 3";
            }
            
            
        }

};
int main(){
element object;
int n;
cout << "Enter a number :" ;
cin >> n;
object.set(n);
object.check();
return 0;
}