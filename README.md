#include <iostream>
#include <string>
using namespace std;
class banking
{
protected:
string name;
string acctype;
int accno;
int avbal;
public:
banking(string Name, string AccType, int AccNo)
{
name = Name;
acctype = AccType;
accno = AccNo;
avbal = 0; // Initialize balance to 0
}
void depoamt()
{
int amount;
cout << "Enter the amount to deposit:\n";
cin >> amount;
if(depamt > 0){
avbal += amount;
cout << "Amount Deposited successfully!\n";
} else {
cout << "Invalid deposit amount!\n";
}
}
void widamt()
{
int amount;
cout << "Enter the amount to withdraw:\n";
cin >> amount;
if (amount > 0)
{
if (amount <= avbal)
{
avbal -= amount;
cout << "Amount Withdrawn successfully!\n";
}
else
{
cout << "Insufficient balance!\n";
}
}
else
{
cout << "Invalid withdrawal amount!\n";
}
}
void disdetails()
{
cout << "\n---Details of Customer:----\n";
cout << "Name: " << name << endl;
cout << "Account Type: " << acctype << endl;
cout << "Account Number: " << accno << endl;
cout << "Balance Available: " << avbal << endl;
}
};
int main()
{
string name, acctype;
int accno;
cout << "Enter customer name: ";
getline(cin, name);
cout << "Enter account type (Saving/Current): ";
getline(cin, acctype);
cout << "Enter account number: ";
cin >> accno;
banking b(name, acctype, accno);
int choice;
do
{
cout << "\nMenu:\n";
cout << "1. Deposit Amount\n";
cout << "2. Withdraw Amount\n";
cout << "3. Display Details\n";
cout << "4. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice)
{
case 1:
b.depoamt();
break;
case 2:
b.widamt();
break;
case 3:
b.disdetails();
break;
case 4:
cout << "Exiting program. Thank you!\n";
break;
default:
cout << "Invalid choice. Please try again.\n";
}
} while (choice != 4);
return 0;
}
