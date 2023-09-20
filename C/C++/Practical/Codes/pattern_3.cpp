// *********
//  *******
//   *****
//    ***
//     *
// Above Pattern Print 
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
            for (int j = 1; j < m; j++)
            {
                cout <<" ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout <<"*";
            }
            m++;

            cout <<endl;
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