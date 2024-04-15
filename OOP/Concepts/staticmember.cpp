//static member in classes
/*
A class can contain static members, either data or functions.
A static data member of a class is also known as a "class variable", because there is only one common variable for all the objects of that same class, sharing the same value: i.e., its value is not different from one object of this class to another.
*/
#include <iostream>
using namespace std;

class Dummy {
    public:
        static int n;//declaring
        Dummy()
        {
            n++;
        }
};

int Dummy::n = 0;

int main()
{
    Dummy a;
    cout << "value of n is: " << a.n << endl;//1
    Dummy *b = new Dummy();
    cout << "value of n is: " << b->n << endl;//2
    Dummy c{};
    cout << "value of n is: " << c.n << endl;//3
    Dummy d = Dummy();
    cout << "value of n is: " << d.n << endl;//4
}