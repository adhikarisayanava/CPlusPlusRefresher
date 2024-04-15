/*Copy constructor : 
It is called when a new object is created from an existing object, as a copy of the existing object
It creates a separate memory block for the new object.
C++ compiler implicitly provides a copy constructor, if no copy constructor is defined in the class.

Assignment operator :
This operator is called when an already initialized object is assigned a new value from another existing object. 
It does not create a separate memory block or new memory space.
*/


#include <iostream>
using namespace std;

class Test 
{
    public:
        Test() {} //Constructor
        Test(const Test&) //Copy Constructor
        {
            cout << "Copy constructor is called" << endl;
        }
        Test& operator=(const Test&)
        {
            cout << "Assignment operator is called" << endl;
            return *this;
        }
};

int main()
{
    Test t1,t2;
    t2 = t1; //Assignment operator is called since t2 is already initialized before
    Test t3=t1; //Copy constructor is called
}