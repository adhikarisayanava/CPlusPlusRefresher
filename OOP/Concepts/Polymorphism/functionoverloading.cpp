//Function overloading or compile-time Polymorphism
#include <iostream>
using namespace std;

class Geeks
{
    public:
        void func(int x)
        {
            cout << "Value of x is: " << x << endl;
        }
        void func(double x)
        {
            cout << "Value of x is: " << x << endl;
        }
        void func(int x, int y)
        {
            cout << "Value of x is: " << x << ",Value of y is: " << y << endl;
        }
};

int main()
{
    Geeks gk;
    gk.func(5);
    gk.func(9.132);
    gk.func(3,4);
}