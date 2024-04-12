#include <rect.h>
#include <iostream>
using namespace std;

int main()
{
    //using object : calling counstructor
    Rectangle rectc = Rectangle();
    
    //Rectangle rectd(); //This will throw an error becaus empty parentheses were disambiguated as a function declaration
    //Other valid ways of calling it are:
    //Rectangle rectc;
    //Rectangle rectc{};

    int areac = rectc.area();
    cout << "[Object]Area is:" << areac << endl;
    
    //using object : contructor overloading
    Rectangle rect(5,7);
    //This is not needed if Constructor is called
    //rect.set_values(5,7);
    int area = rect.area();
    cout << "[Object]Area is:" << area << endl;


    //using pointer
    Rectangle *rectp = new Rectangle(6,8);
    //This is not needed if Constructor is called
    rectp->set_values(6,8);
    int areap = rectp->area();
    cout << "[Pointer]Area is:" << areap << endl;
    
}


/*
PRIVATE(default) : members of a class are accessible only from within other members of the same class (or from their "friends").
PROTECTED : members are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
PUBLIC : members are accessible from anywhere where the object is visible.
*/

