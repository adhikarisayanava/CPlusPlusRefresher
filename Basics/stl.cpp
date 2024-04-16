#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>
#include <stack>
#include <queue>
using namespace std;

void stl_array()
{
    array<int, 5>arr = {1,2,3,4,5};
    //for (int i =0; i < 5; i++)
    //OR
    for (int num : arr)
    {
        //cout << arr[i] << endl;
        cout << num << endl;
    }
}

void stl_vector()
{
    vector<int> vec = {6,7,12,8,14}; //container

    //Accessing element
    cout << "Element at Index 0: " << vec.at(0) << endl;

    for ( int num : vec)
    {
        cout << num << endl;
    }
    //iterators to access elements of a container
    vector<int>::iterator begin = vec.begin();
    vector<int>::iterator end = vec.end(); //It returns an iterator to the theoretical element that comes after the final element. The same applies to all other container types.
    end = end - 1;
    cout << "First Element: " << *begin << "  "<<endl;
    cout << "Last Element: " << *end << "  "<<endl;

    //Adding element
    vec.push_back(10);

    //Deleting last element
    vec.pop_back();

    //Deleting any element
    vec.erase(vec.begin() + 2);

    //Inserting element at any position
    vec.insert(vec.begin()+2,25);

    //Algorithm : sorting, searching, copying, counting
    sort(vec.begin(), vec.end());//sort vector elements in ascending order
    cout << "Sorted order is: " << endl;
    for (int sorted : vec) {
        cout << sorted << endl;
    }
}

void stl_dequeue() //These are similar to vectors with the only difference that deques allow insertion and removal of elements from both the ends of the container.
{
    deque<int> myDeque = {10, 20, 30};
    myDeque.push_front(5);
    myDeque.push_back(40);
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it)
        cout << ' ' << *it; // Output: 5 10 20 30 40
}

/*
List (std::list): List, another STL container, is a doubly-linked list data structure. 
Unlike vectors, it does not support direct access to individual elements by their position; 
Instead, access to elements is performed sequentially from the front(beginning) or back(end). 
However, it provides efficient insertions and deletions in the middle or at both ends, as list elements are not stored in contiguous memory locations and each element carries extra information (the links to its neighbors) to enable this.
*/
void stl_list()
{
    list<int> myList = {10, 20, 30};
    myList.push_front(5);
    myList.push_back(40);

    // Insert 30 at the third position of the list
    list<int>::iterator it = myList.begin();
    advance(it, 2);
    myList.insert(it, 25);

    for (auto it = myList.begin(); it != myList.end(); ++it)
        cout << ' ' << *it; // Output: 5 10 20 30 40
}

//Stack : A stack follows the LIFO (Last In First Out) principle. Elements can be inserted or removed from only one end, referred to as the 'top' of the stack.
void stl_stack()
{
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    while (!myStack.empty()) {
        cout << ' ' << myStack.top();
        myStack.pop();
    }
}

//Queue : A queue follows the FIFO (First In First Out) principle. Elements are inserted at the back (rear) and are deleted from the front.
void stl_queue()
{
    queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    while (!myQueue.empty()) {
        cout << ' ' << myQueue.front();
        myQueue.pop();
    }
}

int main()
{
    //stl_array();
    //stl_vector();
    //stl_dequeue();
    stl_list();
    //stl_stack();
    //stl_queue();
}