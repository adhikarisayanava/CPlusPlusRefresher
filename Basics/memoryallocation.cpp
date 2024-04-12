#include <iostream>
#include <string>
using namespace std;

//Dynamic memory allocation,deallocation using "new", delete
void trying_dynamicmemallocation()
{
    int *foo;
    foo = new int[5];//In this case, the system dynamically allocates space for five elements of type int and returns a pointer to the first element of the sequence, which is assigned to foo (a pointer). 
    //Here above if allocation fails,an exception of type "bad_alloc" is thrown and program is terminated

    //OR
    foo = new (nothrow) int[5]; //if it fails it will return null pointer and execution will continue  
    if (foo == nullptr) {
        // error assigning memory. Take measures.
    }

    //for freeing up the dynalically allocated memory
    delete foo; //deleting single element allocated using new
    delete[] foo; //deleting array of elements allocated using new
}

void trying_dynamicmemallocationexample()
{
    int i,n;
    int *foo;
    cout << "How many numbers you want to enter:" << endl;
    cin >> i;
    foo = new (nothrow) int[i];
    if (foo == nullptr)
    cout << "Error:Not able to allocate memory for the request" << endl;
    else{
        for (n=0; n<i; n++)
        {
            cout << "enter number:" << endl;
            cin >> foo[n];
        }
        cout << "You have entered : " ;
        for (n=0; n<i; n++)
        {
            cout << foo[n] << ",";
        }
        delete[] foo;
    }

}

int main()
{
    trying_dynamicmemallocationexample();
}

/*
malloc: malloc stands for "memory allocation". It is used to allocate a block of memory of a specified size in bytes. The syntax for malloc is as follows:
void* malloc(size_t size);

Example:
int *ptr;
ptr = (int*) malloc(5 * sizeof(int)); //allocates memory for 5 integers

The malloc function returns a void pointer to the allocated memory block. If the allocation fails, it returns a null pointer.
calloc: calloc stands for "contiguous allocation". It is used to allocate a block of memory of a specified number of elements, each of a specified size in bytes. The syntax for calloc is as follows:
void* calloc(size_t num, size_t size);

Example:
int *ptr;
ptr = (int*) calloc(5, sizeof(int)); //allocates memory for 5 integers and initializes all to zero

The calloc function returns a void pointer to the allocated memory block. It initializes all the bytes in the allocated block to zero. If the allocation fails, it returns a null pointer.
realloc: realloc stands for "re-allocation". It is used to resize an already allocated memory block. The syntax for realloc is as follows:
void* realloc(void* ptr, size_t size);

The realloc function takes a pointer to the previously allocated memory block and the new size for the block

Example:
int *ptr;
ptr = (int*) malloc(5 * sizeof(int)); //allocates memory for 5 integers
ptr = realloc(ptr, 10 * sizeof(int)); //resize the allocated memory for 10 integers.

******NOTE***** : It's important to note that for all these functions, if the dynamic memory allocation fails, they will return NULL.
*/