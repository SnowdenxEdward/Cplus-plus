// Simple ATM Machine Simulation 💳 A simple ATM machine where users can check their balance, deposit money, and withdraw money.

#include <iostream>
#include <string>
using namespace std;
int main()
{
   int pin, choice;
   long int depositAmount, withdrawMoney, balance;
   bool exit = false;
   string pinStr;
   do
   {
      cout << "\nATM Menu: \n";
      cout << "1. ----------Enter Pin----------\n";
      cout << "2. ----------Deposit Amount----------\n";
      cout << "3. ----------Withdraw Amount----------\n";
      cout << "4. ----------Check Balance----------\n";
      cout << "5. ----------Exit----------\n";

      cin >> choice, cout << endl;
      switch (choice)
      {
      case 1:
         cout << "Enter a Pin number : ";
         cin >> pin;
         pinStr = to_string(pin);

         if (pinStr.length() != 4)
         {
            cout << "Invalid PIN! Please enter a 4-digit PIN.\n";
         }
         else
            cout << "Pin Verification successfull \n";
         break;

      case 2:
         cout << "Enter deposit amount: ";
         cin >> depositAmount;
         if (depositAmount <= 0)
         {
            cout << "Please enter a valid amount (greater than 0 rupees).\n";
         }
         else
         {
            balance += depositAmount;
            cout << "Deposit successful! Current balance: " << balance << " rupees.\n";
         }
         break;

      case 3:
         cout << "Enter withdrawal amount: ";
         cin >> withdrawMoney;

         if (withdrawMoney > balance)
         {
            cout << "Insufficient balance!\n";
         }
         else if (withdrawMoney <= 0)
         {
            cout << "Please enter a valid withdrawal amount.\n";
         }
         else
         {
            balance -= withdrawMoney;
            cout << "Withdrawal successful! Remaining balance: " << balance << " rupees.\n";
         }
         break;

      case 4:
         cout << "Your current balance is: " << balance << " rupees.\n";
         break;

      case 5:
         cout << "End Program ! \n";
         exit = true;
         break;

      default:
         cout << "Invalid choice. Please select a valid option.\n";
         break;
      }

   } while (!exit);
   return 0;
}
