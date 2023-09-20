#include<iostream>
using namespace std;
class circle{ 
    private:
        int radius;
    public :
        void input(int r){
            radius = r;
        }
        int area(){
            return (3.14*radius*radius);
        }
};
int main()
{
    circle obj=5;
    int r;
    cout<<"Enter the radius:";
    cin >> r ;
    obj.input(r);
    cout << "\n The area is :" << obj.area();
    return 0;
}