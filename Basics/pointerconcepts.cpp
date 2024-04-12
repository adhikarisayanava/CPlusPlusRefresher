#include <iostream>
#include <string>
using namespace std;

/*
The variable that stores address of another variable is what in C++ is called a Pointer.

The reference and dereference operators are complementary:

    & is the address-of operator, and can be read simply as "address of"
    * is the dereference operator, and can be read as "value pointed to by"

In C++, pointers are allowed to take any address value, no matter whether there actually is something at that address or not.
*/

void trying_pointer()
{
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    cout << "MyPointer address is:" << mypointer << endl;
    
    cout << "MyPointer address after increment is:" << mypointer << endl;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "FirstValue is: " << firstvalue << endl; //10
    cout << "SecondValue is: " << secondvalue << endl; //20
}
//////////////////////////////////////////////////////////
/*
Pointers and Arrays

Arrays work very much like pointers to their first elements, and, actually, an array can always be implicitly converted to the pointer of the proper type.

int myarray [20];
int * mypointer;

mypointer = myarray; //IS VALID
myarray = mypointer; //IS NOT VALID since array assignment cannot be changed

a[5] = 0;       // a [offset of 5] = 0 //VALID
*(a+5) = 0;     // pointed to by (a+5) = 0 //VALID

*/
void trying_pointers_arrays()
{
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
}
//////////////////////////////////////////////////////////
//Pointers and constants
void trying_pointers_consts()
{
    int x;
    int y = 10;
    int z = 20;
    const int *p = &y;
    //const int *p = &y; //case1) non-const pointer to const int
    //int * const p = &y;  //case2) const pointer to non-const int
    //const int * const p = &y;  //case3) const pointer to const int
    x = *p;
    cout << "x is:" << x << endl;
    //*p = z; //case1)will throw error assignment of read-only location '* p'
    //p = &z; //case2)will throw error assignment of read-only variable 'p'
    //Both the above errors will be thrown in case3)
       
}
//////////////////////////////////////////////////////////
//Pointer to Pointers
int trying_pointer_to_pointers()
{
    char a = 'z';
    char *b = &a;
    char **c = &b;

    cout << "a is:" << a << endl;
    cout << "b is:" << b << endl;
    cout << "c is:" << c << endl;

    cout << "Final value b refers to is :" << *b << endl;
    cout << "Final value c refers to is :" << **c << endl;

}
//////////////////////////////////////////////////////////
//Void Pointers
void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}

int increaser ()
{
  char a = 'x';
  int b = 1602;
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  cout << a << ", " << b << '\n'; //y, 1603
  return 0;
}

//////////////////////////////////////////////////////////
//NULL pointers
void trying_null_pointers()
{
   
    //All are valid
    int *p = 0;
    int *q = nullptr;
    int *r = NULL;   
    
}

//////////////////////////////////////////////////////////
//Pointers to functions : The typical use of this is for passing a function as an argument to another function. 
int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int main_to_call()
{
    int m,n;
    //int (*minus)(int,int) = subtraction;

    m = operation (7, 2, &addition);
    n = operation (20, m, &subtraction);
    cout <<n;
    return 0;
}




int main()
{
    //trying_pointer();
    //trying_pointers_arrays(); //10, 20, 30, 40, 50,
    //trying_pointers_consts();
    //trying_pointer_to_pointers();
    //increaser();
    //trying_null_pointers();
    main_to_call();
}