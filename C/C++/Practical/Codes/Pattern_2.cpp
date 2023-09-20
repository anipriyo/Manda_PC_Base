// *****
//  ****
//   ***
//    **
//     *
// Above pattern printing 
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
        int m;
        m = num;
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j < i; j++)
            {
                cout <<" ";
            }
            for (int k = 1; k <= m; k++)
            {
                cout <<"*";
            }
            m--;
            cout<<endl;
        }
    }
};
int main()
{
    element object;
    int n;
    cout << "Enter the number of rows :" ;
    cin >> n;
    object.set(n);
    object.check();

    return 0;
}