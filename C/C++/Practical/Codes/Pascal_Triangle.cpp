// Pattern printing in pascal's Triangle 
#include<iostream>
using namespace std;
class element {
    private:
        int rows;
    public:
        void set(int n){
            rows=n;
    }
        void print(){
            int coef = 1, space, i, j;
            for (i = 0; i < rows; i++)
            {
                for (space = 1; space <= rows - i; space++)
                    cout <<"  ";
                for (j = 0; j <= i; j++)
                {
                    if (j == 0 || i == 0)
                        coef = 1;
                    else
                        coef = coef * (i - j + 1) / j;
                    cout << "    " << coef;
                }
                cout << endl ;
            }
    }

};
int main(){
element object;
int n;
cout << "Enter The number of Rows :";
cin >> n;
object.set(n);
object.print();

return 0;
}