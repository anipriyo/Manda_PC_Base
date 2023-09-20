#include<iostream>
using namespace std;
class area {
    public:
    int volume(int a,int b,int c){
        return a*b*c;
    }
    double volume(double a, double b, double c){
        return a*b*c;
    }
    float volume(int a,float b){
        return a*b;
    }
};
int main(){
    area obj;
    cout <<"\nOutput of 3 Int " << obj.volume(10, 20, 30);
    cout <<"\nOutput of 3 Float " << obj.volume(11.5, 20.4, 30.2);
    cout <<"\nOutput of 1 Int 1 Float " << obj.volume(11, 20.4);
}