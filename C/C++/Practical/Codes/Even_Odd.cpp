// Even and Odd number check 
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
            if(num==0)
                cout << "The number is 0" ;
            else if(num%2==0)
                cout << "The number is even" ;
            else 
                cout << "The number is odd" ;
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