#include <iostream>
#include <string>
using namespace std;
class Staff {
protected:
int staffID;
string name, department;
public:
void acceptBasic() {
cout << "Enter Staff ID: ";
cin >> staffID;
cout << "Enter Name: ";
cin >> name;
cout << "Enter Department: ";
cin >> department;
}
void displayBasic() {
cout << "\nStaff ID: " << staffID;
cout << "\nName: " << name;
cout << "\nDepartment: " << department;
}
};
class Teaching : public Staff {
string subject;
public:
void acceptTeaching() {
acceptBasic();
cout << "Enter Subject: ";
cin >> subject;
}
void displayTeaching() {
displayBasic();
cout << "\nSubject: " << subject;
}
};
class NonTeaching : public Staff {
string jobRole;
public:
void acceptNonTeaching() {
acceptBasic();
cout << "Enter Job Role: ";
cin >> jobRole;
}
void displayNonTeaching() {
displayBasic();
cout << "\nJob Role: " << jobRole;
}
};
int main() {
cout << "=== Educational Institution Staff Database ===\n";
Teaching* t = new Teaching();
cout << "\nEnter Teaching Staff Details:\n";
t->acceptTeaching();
NonTeaching* nt = new NonTeaching();
cout << "\nEnter Non-Teaching Staff Details:\n";
nt->acceptNonTeaching();
cout << "\n\n=== Staff Records ===\n";
cout << "\nTeaching Staff:";
t->displayTeaching();
cout << "\n\nNon-Teaching Staff:";
nt->displayNonTeaching();
delete t;
delete nt;
cout << endl;
return 0;
}
