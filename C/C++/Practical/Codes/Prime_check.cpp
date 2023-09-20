// Checking if a number is prime 
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
        int b = 0;
        for(int i=1;i<=num;i++)
        {
            if (num % i == 0)
                b++;
        }
        if (b == 2)
            cout << "The number is prime";
        else
            cout << "The number is not prime";
    }
};
int main()
{
    element object;
    int n;
    cout << "Enter the number :";
    cin >> n;
    object.set(n);
    object.check();
    return 0;
}