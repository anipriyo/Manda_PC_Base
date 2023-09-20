// Concatenation of a string without the use of a predefined function 
#include <iostream>
#include <string.h>
using namespace std;
class element
{
private:
    string str1, str2, str3;
    int length = 0;

public:
    void set(string s1, string s2)
    {
        str1 = s1;
        str2 = s2;
    }
    void len(string s)
    {
        int l;
        for (int i = 0; s[i] != '\0'; i++)
        {
            l++;
        }
        length = l;
    }
    void cat()
    {
        int n = 0, len = length;
        string s1 = str1, s2 = str2;
        for (int n = 0; s2[n] != '\0'; n++)
        {
            s1[len] = s2[n];
            len++;
        }
        s1[len] = '\0';
        cout << "The concatinated String is :";
        for (int n = 0; s1[n] != '\0'; n++)
        {
            cout << s1[n];
        }
    }
};
int main()
{
    element object;
    string s1, s2;
    cout << "Enter the first string :";
    cin >> s1;
    cout << "Enter the second string :";
    cin >> s2;
    object.set(s1, s2);
    object.len(s1);
    object.cat();

    return 0;
}