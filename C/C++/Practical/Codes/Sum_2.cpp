// Sum of Two numbers 
#include<iostream>
using namespace std;
class element {
    private:
        int num1;
        int num2;
    public:
        void set(int n,int m){
            num1=n;
            num2=m;
        }
        void sum(){
            int sum = num1 + num2;
            cout << "The Sum is " << sum;
        }
};
int main(){
element object;
int n,m;
cout << "Enter the first number:" ;
cin >> n;
cout << "Enter the second number:" ;
cin >> m;
object.set(n,m);
object.sum();
return 0;
}