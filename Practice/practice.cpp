#include <iostream>
#include <string>
using namespace std;

int checking_factorial(int x) {

    if (x == 0 or x == 1)
    {
        //cout << "Factorial of" << x << "is 1" << endl;
        return 1;
    }
    else{
        return x*checking_factorial(x-1);
    }
}


int main()
{

    int i;
    cout << "Enter the number to find factorial of:"  << endl;
    cin >> i;
    cout << "The factorial is:" << checking_factorial(i) << endl;

}