//     *
//    **
//   ***
//  ****
// *****
// Above Pattern Printing 
#include <iostream>
using namespace std;
class element
{
private:
    int num;

public:
    void set(int n)
    {
        num = n;
    }
    void check()
    {
        int m = 1;
        for (int i = num; i >= 1; i--)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout<<" ";
            }
            for (int k = 1; k <= m; k++)
            {
                cout<<"*";
            }
            cout<<endl;
            m++;
        }
    }
};
int main()
{
    element object;
    int n;
    cout << "Enter the number of rows :";
    cin >> n;
    object.set(n);
    object.check();

    return 0;
}