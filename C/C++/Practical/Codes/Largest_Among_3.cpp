// Finding The largest number among 3 
#include<iostream>
using namespace std;
class element {
    private:
        int a,b,c;
    public:
        void set(int m , int n , int o){
            a=m;
            b=n;
            c=o;
    }
        void largest(){
            int big = a>c?(a>b?a:b):(b>c?b:c) ;
            cout<<"The largest number is :"<< big; 
        }
};
int main(){
element object;
int m,n,o;
cout << "Enter 1st number : " ;
cin >> m ;
cout << "Enter 2nd number : " ;
cin >> n ;
cout << "Enter 3rd number : " ;
cin >> o ;
object.set(m,n,o);
object.largest();

return 0;
}