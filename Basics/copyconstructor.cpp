//A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.  

#include <iostream>
#include <string.h>
using namespace std;

class Student {
    int rno;
    char name[50];
    double fee;
public:
    Student(int, char[], double);
    Student(const Student&);
    void Display();
};

Student::Student(int no, char n[], double f)
{   
    rno = no;
    strcpy(name,n);
    fee = f;
}

//Copy Contructor
Student::Student(const Student& t)
{
    cout << "Copy contructor is called" << endl;
    rno = t.rno;
    strcpy(name, t.name);
    fee = t.fee;
}

void Student::Display()
{
    cout << "Roll number:" << rno << ",Name:" << name << ",fee:" << fee << endl;
}

int main()
{
    Student var1(1, "Sayanava", 10000);
    //Student var2(var1); //Copy constructor is called
    Student var2 = var1;//Copy constructor is called
    var2.Display();
}