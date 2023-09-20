// Finding Simple interest 
#include<iostream>
using namespace std;
class element {
    private:
        int principal,time,rate;
    public:
        void set(int p,int r,int t){
            principal=p;
            time=t;
            rate=r;
        }
        void calculate()
        {
            int si=(principal*time*rate)/100;
            cout<< "The simple interest is :" << si;
        } 

};
int main(){
element object;
int p,t,r;
cout << "Enter the Principal :" ;
cin >> p;
cout << "Enter the Rate :" ;
cin >> r;
cout << "Enter the Time :" ;
cin >> t;
object.set(p,r,t);
object.calculate();
return 0;
}