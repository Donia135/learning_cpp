/*
  Eng. Donia 
  16/4/2026
  10.53 Am
  */
#include<iostream> 
#include<string>
using namespace std; 

enum enLevel { Beginner = 1, Intermediate = 2, Advanced = 3 }; 

struct StStudentInfo {
    string Name; 
    int Age; 
    int Grade; 
    enLevel Level; 
}; 

// دالة مساعدة لتحويل الـ Enum لنص عند الطباعة
string GetLevelName(enLevel Level) {
    if (Level == enLevel::Beginner) return "Beginner";
    if (Level == enLevel::Intermediate) return "Intermediate";
    if (Level == enLevel::Advanced) return "Advanced";
    return "Unknown";  //اذا لم يتحقق ما سبق 
}

void ReadInfo(StStudentInfo &Info) {
    cout << "*******************************\n"; 
    cout << "Enter student's name: "; 
    cin >> Info.Name; 

    int LevelChoice; 
    cout << "Enter student's level (1:Beginner, 2:Intermediate, 3:Advanced): "; 
    cin >> LevelChoice; 
    Info.Level = (enLevel)LevelChoice; 

    cout << "Enter student's age: "; 
    cin >> Info.Age; 
    cout << "Enter student's grade: "; 
    cin >> Info.Grade; 
} 

void PrintInfo(StStudentInfo Info) {
    cout << "\n****************************\n"; 
    cout << "--- Student Report ---\n";
    cout << "Name: " << Info.Name << endl; 
    cout << "Level: " << GetLevelName(Info.Level) << endl;// لكي يظهر المستوى كنص وليس كرقم
    cout << "Age: " << Info.Age << endl; 
    cout << "Grade: " << Info.Grade << endl; 
} 

string StudentResult(StStudentInfo Info) {
    return (Info.Grade >= 50) ? "SUCCESS" : "FAIL"; 
} 

int main() {
    StStudentInfo Student1; 
    ReadInfo(Student1); 
    PrintInfo(Student1); 
    
    cout << "Result: " << StudentResult(Student1) << endl; 
    cout << "****************************\n"; 

    return 0;
}
