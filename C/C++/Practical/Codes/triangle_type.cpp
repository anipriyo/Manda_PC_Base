// Identifying the type of triangle 
#include<iostream>
using namespace std;
class element {
    private:
        int a,b,c;
    public:
        void set(int m, int n, int o){
            b=n;
            a=m;
            c=o;
    }
        void check(){
            if(a==b && b==c && c==a)
            {
                printf("The triangle is Equilateral");
            }
            else if((a==c && a!=b)|| (a==b && a!=c)|| (b==c && b!=a))
            {
                printf("The triangle is isosceles");	
            }
            else
            {
                printf("The triangle is Scalene");
            }
        }

};
int main(){
element object;
int m,n,o;
cout << "Enter the First Second and Third side of the triangle in cm :" ;
cin >> m >> n >> o;
object.set(m,n,o);
object.check();
return 0;
}