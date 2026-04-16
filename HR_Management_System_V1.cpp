#include<iostream> 
#include<string> // أضيفت المكتبة لضمان عمل النصوص
using namespace std; 

enum enGender { Male = 0, Female = 1 }; 
enum enSpecialization { Engineer = 1, Institute = 2, Accountant = 3, Media = 4 }; 

struct stAddress {
    string Governorate; 
    string street; 
}; 

struct stEmployee {
    string Fullname; 
    int Age; 
    string Nationality; 
    stAddress Address; 
    enGender Gender; 
    enSpecialization specia; 
}; 

string GetSpiciaName(enSpecialization Speciali) {
    if (Speciali == enSpecialization::Engineer) return "Engineer"; 
    if (Speciali == enSpecialization::Institute) return "Institute"; 
    if (Speciali == enSpecialization::Accountant) return "Accountant"; 
    if (Speciali == enSpecialization::Media) return "Media"; 
    return "Unknown";
} 

string GetGenderName(enGender Gender) {
    if (Gender == enGender::Male) return "Male"; 
    if (Gender == enGender::Female) return "Female"; 
    return "Unknown";
} 

void ReadInfo(stEmployee &Info) {
    cout << "\n___ EMPLOYEE'S INFORMATION ___\n"; 
    cout << "Enter Name: "; 
    cin.ignore(); // لتجنب مشاكل المسافات في الاسم الكامل
    getline(cin, Info.Fullname); 

    cout << "Enter age: "; 
    cin >> Info.Age; 

    cout << "Enter nationality: "; 
    cin >> Info.Nationality; 

    int GenderChoice; 
    cout << "Enter gender (0:Male, 1:Female): "; 
    cin >> GenderChoice; 
    Info.Gender = (enGender)GenderChoice; 

    int SpecialChoice; 
    cout << "Enter specialization (1:Eng, 2:Inst, 3:Acc, 4:Media): "; 
    cin >> SpecialChoice; 
    Info.specia = (enSpecialization)SpecialChoice; 

    cout << "Enter Governorate: "; 
    cin >> Info.Address.Governorate; 

    cout << "Enter street: "; 
    cin >> Info.Address.street; 
} 

void PrintInfo(stEmployee Info) {
    cout << "\n____ EMPLOYEE'S CARD ___\n"; 
    cout << "Name: " << Info.Fullname << endl; 
    cout << "Age: " << Info.Age << endl; 
    
    cout << "Gender: " << GetGenderName(Info.Gender) << endl; 
    cout << "Specialization: " << GetSpiciaName(Info.specia) << endl; 
    cout << "Nationality: " << Info.Nationality << endl; 
    cout << "Governorate: " << Info.Address.Governorate << endl; 
    cout << "Street: " << Info.Address.street << endl; 
} 

string Job(enSpecialization specialization) {
    switch (specialization) {
        case enSpecialization::Engineer: return "Production department manager"; 
        case enSpecialization::Institute: return "Maintenance & Operations"; 
        case enSpecialization::Accountant: return "Accounting Department"; 
        case enSpecialization::Media: return "Media team"; 
        default: return "No Job Assigned";
    } 
} 

void Salary(enSpecialization specialization) {
    int salaryUSD = 0;
    switch (specialization) {
        case enSpecialization::Engineer: salaryUSD = 1000; break; 
        case enSpecialization::Institute: salaryUSD = 600; break; 
        case enSpecialization::Accountant: salaryUSD = 700; break; 
        case enSpecialization::Media: salaryUSD = 750; break; 
    } 
    cout << "Your salary is: " << salaryUSD << "$ ";
    cout << "(" << salaryUSD * 15000 << " SYP)" << endl; // الربط بالعملة السورية.. 
} 

int main() {
    char repeat; 
    do {
        stEmployee Employee; 
        ReadInfo(Employee); 
        PrintInfo(Employee); 
        
        // مررت التخصص الفعلي للموظف هنا
        cout << "Your job is: " << Job(Employee.specia) << endl; 
        Salary(Employee.specia); 

        cout << "\nDo you want to add more? (y/n): "; 
        cin >> repeat; 
    } while (repeat == 'y' || repeat == 'Y'); 

    cout << "\nThank you so much, Engineering Donia! ❤️\n"; 
    return 0;
}

