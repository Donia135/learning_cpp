#include <iostream>
#include <string>

using namespace std;

// تعريف ثابت لحجم المصفوفة لسهولة استخدامه في الحلقات
const int TotalPersons = 2;

struct StrInfo {
    string Firstname;
    string Lastname;
    int Age;
    string phone;
};

void Read_Person_Info(StrInfo& Info) {
    cout << "please enter your first name: ";
    cin >> Info.Firstname;
    cout << "please enter your last name: ";
    cin >> Info.Lastname;
    cout << "please enter your age: ";
    cin >> Info.Age;
    cout << "please enter your phone number: ";
    cin >> Info.phone;
}

void Print_Person_Info(StrInfo Info) {
    cout << "------------------------\n";
    cout << "First name  : " << Info.Firstname << endl;
    cout << "Last name   : " << Info.Lastname << endl;
    cout << "Age  : " << Info.Age << endl;
    cout << "Phone number: " << Info.phone << endl;
}

void Read_Info(StrInfo persons[TotalPersons]) {
    for (int i = 0; i < TotalPersons; i++) {
        cout << "\nEntering info for person [" << i + 1 << "]:" << endl;
        Read_Person_Info(persons[i]);
    }
} 

void Print_All_Persons(StrInfo persons[TotalPersons]) {
    for (int i = 0; i < TotalPersons; i++) {
        Print_Person_Info(persons[i]); 
    }
} 

int main() {
    StrInfo persons[TotalPersons];
    
    Read_Info(persons);
    
    cout << "\nDisplaying All Persons Info:\n";
    Print_All_Persons(persons);

    return 0;
}
