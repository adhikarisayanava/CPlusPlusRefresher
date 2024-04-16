#include <iostream>
using namespace std;

void casting_types()
{
    //static_cast : This is the simplest type of cast which can be used to convert one primitive type into another.
    double f = 3.14;
    int sum = static_cast<int>(f) + 2;
    cout << "static_cast sum is: " << sum << endl;

    //const_cast : This is used to add or remove const qualifier from a variable.
    const int var = 10;
    int &refValue = const_cast<int&>(var);
    refValue = 20;

    //reinterpret_cast : This is used for low-level casts which yield implementation-dependent results. Its purpose is for transferring bit patterns from one type to another.
    int *p = new int(65);
    char *ch = reinterpret_cast<char *>(p);
    cout << *p << endl; //65
    cout << *ch << endl; //A
}

//dynamic_cast : This type of casting operator is used for polymorphism, and its the only cast operator which checks the validity of the cast at runtime.
class Base {
    public:
        virtual void print()
        {
            cout << "Base class print" << endl;
        }
};
class Derived : public Base {
    public:
        virtual void print()
        {
            cout << "Derived class print" << endl;
        }
};

int main()
{
    casting_types();//static_cast

    //dynamic cast
    Base* b = new Derived;
    Derived* derived = dynamic_cast<Derived*>(b);//dynamic_cast
    derived->print();
}