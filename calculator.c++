// Calculator using switch statements

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char choice;
    float result;
    cout << "Enter '+' for addition '-' for subtraction '*' for multiplication '/' for division" << endl;
    cin >> choice;
    cout << "enter a two numbers : ";
    cin >> num1 >> num2;

    switch (choice)
    {
    case '+':
        result = num1 + num2;
        cout << "The addition of two number is " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << "The subtraction of two number is " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "The multiplication of two number is " << result << endl;
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "The division of two number is " << result << endl;
        }
        else
            cout << "infinity";
        break;

    default:
        cout << "invalid operator !!";
    }
    return 0;
}
