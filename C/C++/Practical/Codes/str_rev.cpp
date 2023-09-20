//Reversal of a string without the use of a predefined function 
#include <iostream>
#include <string>
using namespace std;
class element
{
private:
    string str;
    int length;

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
        length = l;
        cout << "The length is : " << length;
    }
    void rev()
    {
        int i = 0;
        string str_rev;
        for (int a = length; a != 0; a--)
        {
            str_rev[i] = str[a - 1];
            i++;
        }
        str_rev[length] = '\0';
        cout << endl << "The reversed String is :";
        for (int n = 0; str_rev[n] != '\0'; n++)
        {
            cout << str_rev[n];
        }
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
    object.rev();
    return 0;
}