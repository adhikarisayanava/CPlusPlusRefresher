#include <iostream>
using namespace std;

class CVector {
    public:
        int x,y;
        CVector() {}
        CVector(int a, int b) : x(a),y(b) {}
        CVector operator+ (CVector param);

};

CVector CVector::operator+(CVector param)
{
    CVector temp;
    temp.x = this->x + param.x;
    temp.y = this->y + param.y;
    return temp;
}

int main()
{
    CVector var1(10,6);
    CVector var2(2,3);
    CVector result = var1 + var2;
    cout << "Result: " << result.x << "," << result.y << endl;
    return 0;
}