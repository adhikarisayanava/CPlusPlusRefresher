#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int trying_sstream()
{
    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price; //converting string to numerical data
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    return 0;
}

//if else
int trying_if_else()
{
    int x;
    cout << "Enter x:";
    cin >> x;
    if (x > 5)
    {
        cout << "x is greater than 5" << endl;
    }
    else {
        cout << "x is less than 5" << endl;
    }
}

//do while
int trying_do_while()
{
    string str;
    do {
        cout << "Enter text:" << endl;
        getline(cin, str);
        cout << "You entered: " << str << endl;

    }while (str != "goodbye");
}

//for loop
void trying_for_loop()
{
    int i;
    for (i=10;i>0;i--)
    {
        cout << i << ",";
    }
    cout << "ending..." << endl;
}

//range based for loop
void trying_rangebased_for_loop(){
    string str {"Hello!"};
    for (char c : str)
    {
        cout << "[" << c << "]";
    }
    cout << '\n';
}

//break statement
void trying_break()
{
    int i;
    for (i=10; i>0; i--)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    cout << "ending..." << endl;
}

// goto loop example
int trying_goto()
{
  int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";
}

//declaring a function
void oddoreven(int x);

int main()
{
    //trying_sstream();
    //trying_if_else();
    //trying_do_while();
    //trying_for_loop();
    //trying_rangebased_for_loop();
    //trying_break();
    //trying_goto();
    int i;
    do {
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        oddoreven (i);
    } while (i!=0);
    //Here this is no return statement as the compiler assumes the function ends with an implicit return statement.

}
void oddoreven(int x)
{
    if (x%2 == 0)
    {
        cout << "it is even number" << endl;
    }
    else
    {
        cout << "it is odd number" << endl;
    }
}