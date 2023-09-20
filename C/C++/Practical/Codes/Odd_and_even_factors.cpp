// Finding The odd and even factors 
#include<iostream>
#include<conio.h>
using namespace std;
class factors
{
    private:
        int n;
    public:
        void input(int num){
            n=num;
        }
        void output(){
            cout<<endl<<"The even factors are : ";
            for(int i=1;i<=n;i++){
                if(n%i==0 && i%2==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl<<"The odd factors are : ";
            for(int i=1;i<=n;i++){
                if(n%i==0 && i%2!=0){
                    cout<<i<<" ";
                }
            }
        }
};
int main(){
    factors obj;
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    obj.input(num);
    obj.output();
    getch();
}