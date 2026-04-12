#include <iostream>
#include <string>

using namespace std;

// تعريف ثابت لعدد الموظفين لسهولة التعديل لاحقاً
const int NumberOfEmployees = 2;

struct stAddress {
    string City;
    string Street;
};

struct stEmployee {
    string Name;
    float Salary;
    stAddress Address;
};

// دالة لقراءة بيانات موظف واحد
// استخدمنا المرجع (&) لتعديل البيانات الأصلية مباشرة
void ReadEmployeeData(stEmployee &Employee, int Index) {
    cout << "\nEnter data for employee [" << Index + 1 << "]:" << endl;
    
    cout << "Full Name: ";
    //اgitline: لقراءة الاسم كاملاً،  ws: لتجاهل اي مسافات سابقة
    getline(cin >> ws, Employee.Name);
    
    cout << "Salary: ";
    cin >> Employee.Salary;
    
    cout << "City: ";
    cin >> Employee.Address.City;
    
    cout << "Street: ";
    cin >> Employee.Address.Street;
}

// دالة لطباعة بيانات موظف واحد
void PrintEmployeeData(stEmployee Employee) {
    cout << "Employee: " << Employee.Name << endl;
    cout << "Lives in : " << Employee.Address.City << " - " << Employee.Address.Street << endl;
    cout << "Salary   : " << Employee.Salary << "$" << endl;
    cout << "----------------------------------" << endl;
}

int main() {
    stEmployee Employees[NumberOfEmployees];

    cout << "--- Employee Data Entry System ---" << endl;

    // حلقة لقراءة البيانات باستخدام الدالة
    for (int i = 0; i < NumberOfEmployees; i++) {
        ReadEmployeeData(Employees[i], i);
    }

    cout << "\n----------------------------------\n";
    cout << "Data saved successfully.. View results:\n";
    cout << "----------------------------------\n";

    // حلقة لطباعة البيانات باستخدام الدالة
    for (int i = 0; i < NumberOfEmployees; i++) {
        PrintEmployeeData(Employees[i]);
    }

    return 0;
}
