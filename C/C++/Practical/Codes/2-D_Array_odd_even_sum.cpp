// Sum of odd and wvwn numbers in a 2-D Array
#include<iostream>
using namespace std;
class element {
    private:
        int p1,p2;
    public:
        void set(int m,int n){
            p1=m;
            p2=n;
    }
    void check()
    {
        int arr[p1][p2];
        int i, j, sE = 0, sO = 0;
        for (i = 0; i < p1; i++)
        {
            for (j = 0; j < p2; j++)
            {
                cout << "Enter the number : ";
                cin >> arr[i][j];
                if (arr[i][j] % 2 == 0)
                    sE = sE + arr[i][j];
                if (arr[i][j] % 2 != 0)
                    sO = sO + arr[i][j];
            }
        }
        cout<<endl<< "The sum of even numbers is : "<< sE;
        cout<<endl<< "The sum of odd numbers is :"<< sO;
    }
};
int main(){
element object;
int m,n;
cout << "Enter the 2 parameters of 2D Array :" ;
cin >> m >> n;
object.set(m,n);
object.check();

return 0;
}