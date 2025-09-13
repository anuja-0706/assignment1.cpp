#include <iostream>
#include <string>
using namespace std;
class Employee {
int empID;
string name, department, doj, address, phone;
static int count; // static member
public:
// Default constructor
Employee() {
empID = 0;
count++;
}
// Parameterized constructor
Employee(int id, string n, string d, string j, string a, string
p) {
empID = id;
name = n;
department = d;
doj = j;
address = a;
phone = p;
count++;
}
void accept() {
cout << "\nEnter Employee ID: ";
cin >> empID;
cout << "Enter Name: ";
cin >> name;
cout << "Enter Department: ";
cin >> department;
cout << "Enter Date of Joining: ";
cin >> doj;
cout << "Enter Address: ";
cin >> address;
cout << "Enter Phone: ";
cin >> phone;
}
void display() {
cout << "\nEmployee ID: " << empID;
cout << "\nName: " << name;
cout << "\nDepartment: " << department;
cout << "\nDate of Joining: " << doj;
cout << "\nAddress: " << address;
cout << "\nPhone: " << phone << endl;
}
// Static function
static void showCount() {
cout << "\nTotal Employees: " << count << endl;
}
// Destructor
~Employee() {
count--;
}
};
int Employee::count = 0;
int main() {
int n;
cout << "Enter number of employees: ";
cin >> n;
// Dynamic allocation
Employee *list = new Employee[n];
for (int i = 0; i < n; i++) {
cout << "\nEnter details of Employee " << i + 1 << ":\n";
list[i].accept();
}
cout << "\n===== Employee Database =====\n";
for (int i = 0; i < n; i++) {
list[i].display();
}
Employee::showCount();
// Free memory
delete[] list;
return 0;
}
