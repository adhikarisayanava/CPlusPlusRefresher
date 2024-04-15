//A pure virtual function is implemented by classes that are derived from an Abstract Class
//We cannot create objects of abstract classes

#include <iostream>
using namespace std;

class Base{
    protected:
        int x;
    public:
        Base(int i) //An abstract class can have constructors
        {
            x = i;
            cout << "Constructor of base called\n";
        }
        virtual void fun() = 0; //pure virtual function
        int getx()
        {
            return x;
        }
};

class Derived : public Base
{   
    int y;
    public:
        Derived(int i, int j) : Base(i)
        {
            y = j;
        }
        void fun() //If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.
        {
            cout << "fun implemented and called in derived class" << endl;
            cout << "x=" << x << ",y=" << y << endl;
        }
};

int main()
{
    Derived d(5,10);
    d.fun();
    //Base ptr; //will throw an error as Abstract Class cannot be instantiated
    Base *ptr = new Derived(6,8); //we can have pointers to Abstract Classes
    ptr->fun();
}