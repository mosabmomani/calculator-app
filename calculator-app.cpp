

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
float divide(float a, float b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << std::endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}       

int main()
{
    cout << "Calculator App" << std::endl;
    cout << "2 + 3 = " << add(2, 3) << std::endl;
    cout << "5 - 2 = " << subtract(5, 2) << std::endl;
    cout << "4 * 3 = " << multiply(4, 3) << std::endl;
    cout << "10 / 2 = " << divide(10, 2) << std::endl;
    return 0;
}


