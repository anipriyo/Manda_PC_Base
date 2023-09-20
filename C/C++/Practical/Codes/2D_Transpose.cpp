// 2-D Array Transpose 
#include<iostream>
using namespace std;
class element {
    private:
        int row,column,arr[10][10];
    public:
        void set(int m,int n){
            row=m;
            column=n;
            arr[row][column];
    }
        void insert(){
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < column; ++j)
                {
                    cout << "Enter element a" << i + 1 << j + 1 << ": ";
                    cin >> arr[i][j];
                }
            }
        }
        void print(){
            cout << "\nEntered Matrix: " << endl;
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < column; ++j)
                {
                    cout << " " << arr[i][j];
                    if (j == column - 1)
                        cout << endl;
                }
            }
        }
        void transpose(){
            cout << "\nTranspose of Matrix: " << endl;
            for (int i = 0; i < column; ++i)
                for (int j = 0; j < row; ++j)
                {
                    cout << " " << arr[j][i];
                    if (j == row - 1)
                        cout << endl;
                }
        }
};
int main(){
element object;
int m,n;
cout <<"Enter the dimensional size of matrix :";
cin >> m >> n;
object.set(m,n);
object.insert();
object.print();
object.transpose();
return 0;
}