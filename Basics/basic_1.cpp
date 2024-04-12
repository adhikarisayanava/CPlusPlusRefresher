#include <iostream>
#include <string>
#include <cstring>
using namespace std;


//IDENTIFIER

//#ifndef SAYANAVA_TESTING
//#define SAYANAVA_TESTING

#define PI 3.14159

const double pi = 3.14159;
const double Sayanava = 2.25;

int basic1()
{
    //Sum
  
    int j,k,sum1;
    cout << "Enter j:";
    cin >> j; //for taking input
    cout << "Enter k:";
    cin >> k;
    sum1 = j+k;
    cout << "sum is:" << sum1 << endl;


    //Declaring variable
    int a = 3;
    int b(2);
    int c = {4};
    int sum = a + b +c;
    cout << "sum is:" << sum << endl; //9

    //Type deduction
    int foo = 0;
    auto bar = foo; //same as int bar = foo;
    decltype(foo) car; //same as int car;

    cout << "Sayanava is:" << Sayanava << endl;
    //Sayanava = 4.0; This will throw error assignment of read-only variable 'Sayanava'
    //cout << "Sayanava is:" << Sayanava << endl;

    return 0;
}

void basicString()
{
    string str = "My first string";
    cout << str << endl;
}

void area()
{
    double r = 5.0;
    double circle1 = pi * r * r; //using const
    double circle = PI * r * r; //using IDENTIFIER
    cout << "area is:" << circle << endl;
    cout << "area1 is:" << circle1 << endl;
}

//Conditional Operator
void cond_op()
{
    int a =2, b = 5,c;
    c = (a>b) ? 4:3;
    cout << "c is:" << c << endl;    
}

//taking input for numbers & strings
void taking_inputs()
{
    int i;
    cout << "asking for user input:";
    cin >> i;
    cout << "User entered:" << i << endl;
    cout << "Your name:";
    string mystr;
    getline(cin, mystr);
    cout << "Hello" << mystr << endl;
}

int main()
{

    basic1();
    basicString();
    float f1 = 5; //32 bit, 7 digit of precision after decimal point
    double f2 = 5; //64 bit, 15-16 digit of precision after decimal point
    cout << f1 << endl;
    cout << f2 << endl;
    area();
    cond_op();

    //type casting
    int i;
    float j = 3.14;
    i = (int)j;
    cout << "i after casting is:" << i << endl;
    char c = 'a';
    cout << "size of c is:" << sizeof(c) << endl; //1
    char ch[] = "abc";
    cout << "length of ch is:" << strlen(ch) << endl; //4
    
    taking_inputs();

}

//#endif //SAYANAVA_TESTING
//#endif //for #if 0