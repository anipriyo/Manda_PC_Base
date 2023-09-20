// Finding the odd and even Sum of n numbers 
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
            int i=0,sum1=0,sum2=0;
            while(i <= num){
            if(i%2==0)
                sum1=sum1+i;
            else
                sum2=sum2+i;
                i++;
	        }
            cout << "Sum of even is : " << sum1 << "\nSum of odd is : " << sum2 ;
    }

};
int main(){
element object;
int l, n;
cout << "Enter the limit and the number : ";
cin >> n;
object.set(n);
object.check();
return 0;
}