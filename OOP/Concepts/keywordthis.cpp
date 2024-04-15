//The keyword "this" represents a pointer to the object whose member function is being executed. It is used within a class's member function to refer to the object itself.
#include <iostream>
using namespace std;

class Dummy {
  public:
    int var1 = 123;
    bool isitme ();
    int testing();
};

int Dummy::testing()
{
    cout << "I am inside testing" << endl;
}

bool Dummy::isitme ()
{
    this->var1 = 234; 
    //this.var1 = 456; //this will throw error since it is a pointer
    cout << "this->var1 is:" << this->var1 << endl;
    this->testing();
    return true;
}

int main () {
  Dummy a;
  a.isitme();
}