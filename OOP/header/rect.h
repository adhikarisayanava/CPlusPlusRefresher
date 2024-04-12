#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle();
        Rectangle(int,int);//Constructor Overloading
        void set_values(int x, int y);
        int area();
};