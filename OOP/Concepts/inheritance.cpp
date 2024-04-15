#include <iostream>
using namespace std;

class Polygon
{
    protected:
        int width, height;
    public:
        void set_values(int a, int b)
        {
            width = a;
            height = b;
        }
};

class Rectangle : public Polygon
{
    public:
        int area()
        {
            cout << "Area is:" << width * height << endl;
            return 0;
        }

};

int main()
{
    Rectangle r;
    Polygon p;
    r.set_values(4,5); //this won't be accessible if Polygon is inherited as "protected or private"
    r.area();
}