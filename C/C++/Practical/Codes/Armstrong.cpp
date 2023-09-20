// Armstrong Number Check 
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
        int originalNum=num, remainder, result = 0;
        while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    }

};
int main(){
element object;
int n;
cout <<"Enter a number: ";
cin >> n;
object.set(n);
object.check();

return 0;
}