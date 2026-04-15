/*
 * Project: Student Level Management System
 * Author: Eng. Donia 
 * Date: 2026-04-15
 * Description: This program demonstrates the use of Enums and Functions 
 * to organize study plans based on student levels.. 
 */


#include<iostream> 
using namespace std; 

// 1. تعريف الـ Enum
enum enLevel { Beginner = 1, Intermediate = 2, Advanced = 3 }; 

// 2. دوال طباعة الخطط 
void BeginnerLevel() {   
    cout << "Step 1: Learn letters\n"; 
    cout << "Step 2: Learn words\n"; 
} 

void IntermedLevel() {
    cout << "Step 1: Learn reading\n"; 
    cout << "Step 2: Learn writing\n"; 
} 

void AdvancedLevel() {
    cout << "Step 1: Learn grammar rules\n"; 
} 

// 3. دالة العرض
void ShowLevelMenu() {
    cout << "******************************\n";
    cout << "  Choose the child's level   \n"; 
    cout << "******************************\n";
    cout << "(1) Beginner\n"; 
    cout << "(2) Intermediate\n"; 
    cout << "(3) Advanced\n"; 
    cout << "*****************************\n";
    cout << "Your choice: ";
} 

// 4. دالة القراءة وتحويل الرقم لـ Enum
enLevel ReadLevel() {
    int choice; 
    cin >> choice; 
    return (enLevel)choice;  
} 

// 5. دالة التنفيذ (تنادي الدوال بناءً على الـ Enum)
void ExecutePlan(enLevel Level) {
    switch (Level) {
    case enLevel::Beginner: 
        BeginnerLevel(); 
        break; 

    case enLevel::Intermediate: 
        IntermedLevel(); 
        break; 

    case enLevel::Advanced: 
        AdvancedLevel(); 
        break; 
    default:
        cout << "Invalid choice!\n";
    } 
}

int main() {
    ShowLevelMenu(); 
    
    // قراءة الخيار ثم تنفيذه
    enLevel myLevel = ReadLevel();
    
    cout << "\n--- Your Study Plan ---\n";
    ExecutePlan(myLevel);
    
    return 0;
}

