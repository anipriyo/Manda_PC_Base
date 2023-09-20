// Printing of Fibonacci Series upto n
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
        int a = 0, b = 1, c;
        printf("The series runs as follows:");
        while (a <= num)
        {
            c = a + b;
            cout << " " << a ;
            a = b;
            b = c;
        }
    }
};
int main()
{
    element object;
    int n;
    cout << "Enter the limit : ";
    cin >> n;
    object.set(n);
    object.check();
    return 0;
}