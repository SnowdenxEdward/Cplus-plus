// factroial without recursion : 

#include <iostream>
using namespace std;
int main()
{
    int factorial = 1, num;
    cout << "Enter a natural number" << endl;
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout << "The factorial of number is  " << endl
         << factorial;

    return 0;
} 
