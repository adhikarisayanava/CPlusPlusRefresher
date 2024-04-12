#include <iostream>
#include <string>
using namespace std;

void trying_pass_by_value(int a,int b, int c)
{
    a*=2;
    b*=2;
    c*=2;
}

void trying_pass_by_reference(int &a,int &b, int &c)
{
    a*=2;
    b*=2;
    c*=2;
}
//////////////////////////////////////////////////////////
//OVERLOADING FUNCTIONS
int operate (int a, int b)
{
  return (a*b);
}

double operate (double a, double b)
{
  return (a/b);
}
//////////////////////////////////////////////////////////
//FUNCTION TEMPLATE
template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}
//////////////////////////////////////////////////////////
//namespaces
namespace foo
{
    int value() 
    {
        return 5;
    }
    
}

namespace bar
{
    int value()
    {
        return 6;
    }
}
//////////////////////////////////////////////////////////
// using
#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}



int main ()
{
    //PASS BY VALUE, PASS BY REFERENCE
    /*
    int x=1, y=3, z=7;
    //trying_pass_by_value (x, y, z);x=1, y=3, z=7
    trying_pass_by_reference(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z; //x=2, y=6, z=14, here it changes the original values of the variables.
    */

    //OVERLOADING FUNCTIONS
    /* 
    int x=5,y=2;
    double n=5.0,m=2.0;
    cout << operate (x,y) << '\n';
    cout << operate (n,m) << '\n';
    */
    
    //FUNCTION TEMPLATE
    /*
    int i=5, j=6, k;
    double f=2.0, g=0.5, h;
    k=sum<int>(i,j);
    h=sum<double>(f,g);
    cout << k << '\n';
    cout << h << '\n';
    */
   
   //NAMESPACE
   /*
   cout << foo::value() << endl;
   cout << bar::value() << endl;
   */

    //USING
    using first::x;
    using second::y;
    cout << x << '\n';
    cout << y << '\n';
    cout << first::y << '\n';
    cout << second::x << '\n';
}