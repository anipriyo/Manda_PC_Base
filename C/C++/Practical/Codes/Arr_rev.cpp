// Printing The reverse of an Array
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
        int arr[num], i, a;
        for (i = 0; i < num; i++)
        {
            cout << "\n Enter a number :";
            cin >> arr[i];
        }
        cout << "\n Array in reverse :";
        for (a = num - 1; a >= 0; a--)
        {
            cout<<""<<arr[a];
        }
    }
};
int main()
{
    element object;
    int n;
    cout << "Enter The number of elements of array :";
    cin >> n;
    object.set(n);
    object.check();

    return 0;
}