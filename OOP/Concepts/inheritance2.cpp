/*
In principle, a publicly derived class inherits access to every member of a base class except:

    its constructors and its destructor
    its assignment operator members (operator=)
    its friends
    its private members
*/


// constructors and derived classes
#include <iostream>
using namespace std;

class Mother {
  public:
    Mother ()
      { cout << "Mother: no parameters\n"; }
    Mother (int a)
      { cout << "Mother: int parameter\n"; }
};

class Daughter : public Mother {
  public:
    Daughter (int a) //calls default constructor of Mother with no arguments
      { cout << "Daughter: int parameter\n\n"; }
};

class Son : public Mother {
  public:
    Son (int a) : Mother (a) //calls Paramterized constructor of Mother
      { cout << "Son: int parameter\n\n"; }
};

int main () {
  Daughter kelly(0);
  Son bud(0);
  
  return 0;
}

/*
Mother: no parameters
Daughter: int parameter

Mother: int parameter
Son: int parameter
*/