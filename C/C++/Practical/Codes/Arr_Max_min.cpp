// Largest and Smallest Number in and Array 
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
            int arr[20], i, a, b, max, min;
            for (i = 0; i < num; i++)
            {
                cout <<endl<<"Enter a number :";
                cin >> arr[i];
            }
            max = arr[0];
            min = arr[0];
            for (a = 1; a < num; a++)
            {
                if (arr[a] > max)
                {
                    max = arr[a];
                }
            }
            for (b = 1; b < num; b++)
            {
                if (arr[b] < min)
                {
                    min = arr[b];
                }
            }
            cout<< "maximum is = "<< max;
            cout<<endl<< "minimum is = "<< min;
        }
};
int main(){
element object;
int n;
cout << "Enter the number of data you want to enter :" ;
cin >> n;
object.set(n);
object.check();

return 0;
}