#include <rect.h>
#include <iostream>
using namespace std;

int main()
{
    Rectangle rect;
    rect.set_values(5,7);
    int area = rect.area();
    std::cout << "Area is:" << area << std::endl;
}


/*
PRIVATE(default) : members of a class are accessible only from within other members of the same class (or from their "friends").
PROTECTED : members are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
PUBLIC : members are accessible from anywhere where the object is visible.
*/

