#include <iostream>
using namespace std;

class Base
{
    private:
        int priv_variable;
    protected:
        int protected_variable;
    public:
        int pub_variable;
        Base()
        {
            priv_variable = 10;
            protected_variable = 20;
            pub_variable = 30;
        }
        friend class Bondhu;
        friend void friendFunction(Base& obj);
};

void friendFunction(Base& obj)
{
    cout << "friendFunction : Base's private variable value is:" << obj.priv_variable << endl;
    cout << "friendFunction : Base's public variable value is:" << obj.pub_variable << endl;
    cout << "friendFunction : Base's protected variable value is:" << obj.protected_variable << endl;
}

class Bondhu
{
    public:
        void Display(Base& b) //or void Display(Base b)
        {
            cout << "friendClass : Base's private variable value is:" << b.priv_variable << endl;
            cout << "friendClass : Base's public variable value is:" << b.pub_variable << endl;
            cout << "friendClass : Base's protected variable value is:" << b.protected_variable << endl;
        }

};

int main()
{
    Base b;
    friendFunction(b);
    Bondhu bon;
    bon.Display(b);
}