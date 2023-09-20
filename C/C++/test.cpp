#include<iostream>
using namespace std;
class test {
    public:
        int p1, p2, result;
        void add();
    private: 
        int pe1, pe2;
    protected: 
        int pr1, pr2;
    
};
void test :: add() {
    int result = p1 + p2;
    cout << "\nSummation : " << result;   
}
int main() {
    test obj;
    cout << "\nEnter 1st No. : ";
    cin >> obj.p1;
    cout << "\nEnter 2nd No. : ";
    cin >> obj.p2;
    obj.add();
    // return 0;
}