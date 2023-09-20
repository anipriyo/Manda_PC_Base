// Printing of Floyd's Triangle Pattern
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
            int i, j, m = 1;
            for (i = 1; i <= num; i++){
                for (j = 1; j <= i; ++j){
                    cout << " "<< m;
                    ++ m;
                }
                cout << endl ;
            }
        }
};
int main(){
element object;
int n;
cout << "Enter the number of Rows";
cin >> n;
object.set(n);
object.check();
return 0;
}