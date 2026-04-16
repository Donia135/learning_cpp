/*
  Eng. Donia 
  16/4/2026
  12.58 pm
  */


#include<iostream> 
using namespace std; 

enum enCalculate { Add = 1, Subtract = 2, Multiply = 3, Divide = 4 }; 

void ListOfOperation() {
    cout << "\n--- THE LOGIC CALCULATOR ---\n"; 
    cout << "(1) Add\n"; 
    cout << "(2) Subtract\n"; 
    cout << "(3) Multiply\n"; 
    cout << "(4) Divide\n"; 
    cout << "Your choice: "; 
} 

enCalculate ReadOperation() {
    int op; 
    cin >> op; 
    return (enCalculate)op; 
} 

// حطيت النوع float للتعامل مع القسمة بدقة
void PrintResult(enCalculate Op, float x, float y) {
    switch (Op) {
    case enCalculate::Add: 
        cout << "Result = " << x + y << endl;
        break; 
    case enCalculate::Subtract: 
        cout << "Result = " << x - y << endl;
        break; 
    case enCalculate::Multiply: 
        cout << "Result = " << x * y << endl;
        break; 
    case enCalculate::Divide: 
        if (y != 0)
            cout << "Result = " << x / y << endl;
        else
            cout << "Error: Division by zero!\n";
        break; 
    default: 
        cout << "Invalid Operation!\n";
    } 
} 

int main() {
    char repeat;
    do {
        float x, y; // استخدام float لأرقام أدق.. 
        cout << "\nEnter first number (x): "; cin >> x; 
        cout << "Enter second number (y): "; cin >> y; 

        ListOfOperation(); 
        enCalculate myOp = ReadOperation(); 

        PrintResult(myOp, x, y);

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Thank you for using Logic Calculator. Goodbye!\n";
    return 0;
}
