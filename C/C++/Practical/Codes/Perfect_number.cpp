// Checking if a number is a perfect number 
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
            int sum = 0;
            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                    sum = sum + i;
            }
            if (num == sum)
                cout <<"The number is perfect";
            else
                cout <<"The number is not perfect";
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