#include<iostream>
using namespace std;

class A 
{
    public:
        int a;
};

class B :  public virtual A 
{
    public:
        int b;
};

class C : public virtual  A 
{
    public:
        int c;
};

class D : public B, public C
{
    public:
        int d;
};

int main()
{
    D d;
    d.a = 10; //a' is unambiguous – Virtual inheritance ensures that only one 'a' member is inherited.
    d.b = 20;
    d.c = 30;
    d.d = 40;
    
    return 0;
}