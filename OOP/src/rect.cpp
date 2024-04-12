#include <rect.h>
#include <iostream>
using namespace std;

void Rectangle::set_values(int x,int y)
{
    width = x;
    height = y;
}

int Rectangle::area()
{
    return width*height;
}