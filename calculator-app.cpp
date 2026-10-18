

#include <iostream>
using namespace std;
string IsItOddOrEvenNumber (int number)
{
    if (number % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}
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
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}       

int main()
{
    cout << "Calculator App" << endl;
    cout << "2 + 3 = " << add(2, 3) << endl;
    cout << "5 - 2 = " << subtract(5, 2) << endl;
    cout << "4 * 3 = " << multiply(4, 3) << endl;
    cout << "10 / 2 = " << divide(10, 2) << endl;
    cout << "Is 5 odd or even? " << IsItOddOrEvenNumber(5) << endl;
    cout << "Is 6 odd or even? " << IsItOddOrEvenNumber(6) << endl;
    return 0;
}


