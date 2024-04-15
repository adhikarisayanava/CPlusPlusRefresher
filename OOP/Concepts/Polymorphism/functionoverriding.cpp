//Function Overriding or Run-time Polymorphism
#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout << "Print in Base Class" << endl;
        }
        void show()
        {
            cout << "Show in Base Class" << endl;
        }
};

class Derived : public Base
{
    public:
        void print()
        {
            cout << "Print in Derived Class" << endl;
        }
        void show()
        {
            cout << "Show in Derived Class" << endl;
        }
};

int main()
{
    Derived d;
    Base *ptr;
    ptr = &d;
    ptr->print(); //Print in Derived Class
    ptr->show();  //Show in Base Class
    Base b;
    b.print();//Print in Base Class
}