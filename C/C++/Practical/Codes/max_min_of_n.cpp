// Finding the largest and smallest number among n numbers 
#include <iostream>
using namespace std;
class element
{
private:
    int num;

public:
    void set(int n){
        num = n;
    }
    void check(){
        int max = 0, min = 0, no;
        for (int i = 0; i < num; i++){
            cout << "Enter the number :";
            cin >> no;
            if (i == 0){
                max = no;
                min = no;
            }
            if (no > max){
                max = no;
            }
            if (no < max){
                min = no;
            }
        }
        cout << "The largest number is :" << max << endl
             << "The Least number is :" << min;
    }
};
int main(){
    element object;
    int n;
    cout << "Enter the number of numbers :";
    cin >> n;
    object.set(n);
    object.check();
    return 0;
}