#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int numerator = 20;
        int denominator = 0;
        if (denominator == 0){
            throw runtime_error("Division by 0");
        }
        int result = numerator/denominator;
        cout << "Result after division is:" << result << endl;
    }
    catch(const exception& e)
    {
        cout << e.what() << '\n';
    }
    return 0;    
}

//Division by 0