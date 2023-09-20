// Finding the sum of the odd and even digits of a number 
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
            int cpy, sum1 = 0, sum2 = 0, r;
            cpy = num;
            while (cpy > 0)
            {
                r = cpy % 10;
                if (r % 2 == 0)
                    sum1 += r;
                else
                    sum2 += r;
                cpy = cpy / 10;
            }
            cout<< "The Even sum is : " << sum1;
            cout<< "\nThe odd sum is : " << sum2;
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