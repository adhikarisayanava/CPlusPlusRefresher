#include <rect.h>
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int x, int y)
{
    width = x;
    height = y;
}

//Other ways of defining constructor
//Rectangle::Rectangle(int x, int y) : width(x), height(y) {}

void Rectangle::set_values(int x,int y)
{
    width = x;
    height = y;
}

int Rectangle::area()
{
    return width*height;
}