#include <iostream>
#include <string>
//below one is for using STL container array
#include <array>
using namespace std;

//ARRAY
int foo[] = {20,15,3,12,12071};
int n, result =0;

//////////////////////////////////////////////////////////
//ARRAYS AS PARAMETERS
void printarray(int arg[], int length)
{
    for (int i=0; i<length; i++)
    {
        cout << arg[i] << ' ';
    }
}

void printSTLarray(array<int, 5> bar)
{
    for (int i:bar)
    {
        cout << i << ' ';
    }
}

//////////////////////////////////////////////////////////
//ARRAY OF CHARACTERS
void array_of_char()
{
    char myworld1[] = {'H','e','l','l','o','\0'}; //C-String
    char myworld2[] = "Hello";
    cout << myworld1 << endl;
    cout << myworld2 << endl;

}

//////////////////////////////////////////////////////////
//C-String
void tryin_C_String()
{
    char myntcs[] = "some text";
    string mystring = myntcs;  // convert c-string to string
    cout << mystring << endl;  // printed as a library string
    cout << mystring.c_str();  // printed as a c-string
}

int main()
{
    //ARRAY
/*
    for(n=0;n<5;n++)
    {
        result += foo[n];
    }
    cout << result << endl;


    //ARRAYS AS PARAMETERS

    int bar[] = {20,15,3,12,120};
    printarray(bar, 5);
    
    //////////////////////////////////////////////////////////
    //Standard Template Library CONTAINER arrays
    array<int, 5> bar = {1, 2, 3, 4, 5};
    printSTLarray(bar);
*/
    //array_of_char();
    tryin_C_String();

}


