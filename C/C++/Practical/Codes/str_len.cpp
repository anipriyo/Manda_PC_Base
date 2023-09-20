// Finding length of a string without the use of a predefined function 
#include <iostream>
#include <string>
using namespace std;
class element
{
private:
    string str;

public:
    void set(string s)
    {
        str = s;
    }
    void len()
    {
        int l;
        for (int i = 0; str[i] != '\0'; i++)
        {
            l++;
        }
        cout << "The length is : " << l;
    }
};
int main()
{
    element object;
    string s;
    cout << "Enter a string :";
    cin >> s;
    object.set(s);
    object.len();

    return 0;
}