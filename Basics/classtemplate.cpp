#include <iostream>
using namespace std;

template <class T>
class MyPair {
    public :
        T a,b;
        MyPair(T first,T second)
        {
            a = first;
            b = second;
        }
        T getmax();

};

template <class T>
T MyPair<T>::getmax()
{
    return a > b ? a:b;
}

int main()
{
    MyPair <int> obj1 = MyPair(6,5);
    cout << obj1.getmax() << endl;
    return 0;
}
