// Finding the surface area and volume of a cuboid 
#include<iostream>
using namespace std;
class element {
    private:
        int l,b,h;
    public:
        void set(int m,int n,int o){
            l=m;
            b=n;
            h=o;
        }
        void area(){
            int area=l*b*h;
            cout<<"The area is " << area;
        }
        void surface_area(){
            int surface_area=(2*l*b + 2*l*h + 2*b*h);
            cout<<"The surface area is " << surface_area;
        }

};
int main(){
element object;
int m,n,o;
cout << "Enter the first side of cuboid :" ;
cin >> m;
cout << "Enter the first side of cuboid :" ;
cin >> n;
cout << "Enter the first side of cuboid :" ;
cin >> o;
object.set(m,n,o);
object.area();
object.surface_area();

return 0;
}