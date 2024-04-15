//static member in classes
/*
A class can contain static members, either data or functions.
A static data member of a class is also known as a "class variable", because there is only one common variable for all the objects of that same class, sharing the same value: i.e., its value is not different from one object of this class to another.
*/
#include <iostream>
using namespace std;

class Dummy {
    public:
        int normal_var;
        static int static_var;
        static int n;//declaring
        Dummy()
        {
            n++;
            normal_var = 5;
        }
        static void print()
        {
            /*
            Static member function is:
            ->Independent of any object of the class
            ->Can be called even if no object of the class exists
            ->Can also be accessed using the class name through scope resolution operator
            ->Can access static data members and static member functions inside or outside of the class
            */
           
            //cout << "Inside static member function,normal_var:" << normal_var << endl;//this will throw error since static member function can only access static variable
            cout << "Inside static member function,static_var:" << static_var << endl;
        }
};

int Dummy::n = 0; //this initialization is mandatory
int Dummy::static_var = 2; 

int main()
{
    Dummy a;
    cout << "value of n is: " << a.n << endl;//1
    Dummy *b = new Dummy();
    cout << "value of n is: " << b->n << endl;//2
    Dummy c{};
    cout << "value of n is: " << c.n << endl;//3
    Dummy d = Dummy();
    cout << "value of n is: " << d.n << endl;//4
    //calling static function using Object
    d.print();
    //calling static function using Class
    Dummy::print();

}