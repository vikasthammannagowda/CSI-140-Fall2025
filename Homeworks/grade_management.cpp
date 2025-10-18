#include <iostream>
using namespace std;

int main() {
    // ============================================
    // PART 1: Grade Classification
    // ============================================
    cout << "=== PART 1: Grade Classification ===" << endl;
    
    // Test with different scores
    int score;
    
    cout << "Enter student score (0-100): ";
    cin >> score;
    
    // TODO: Complete the if-else ladder to classify grades
    // 90-100: Grade A (Excellent)
    // 80-89: Grade B (Good)  
    // 70-79: Grade C (Average)
    // 60-69: Grade D (Below Average)
    // Below 60: Grade F (Failing)
    
    
    
    
    cout << endl;
    
    // ============================================
    // PART 2: Scholarship Eligibility (Nested if-else)
    // ============================================
    cout << "=== PART 2: Scholarship Eligibility ===" << endl;
    
    double gpa;
    double attendance;
    
    cout << "Enter student GPA (0.0-4.0): ";
    cin >> gpa;
    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;
    
    // TODO: Implement nested if-else for scholarship eligibility
    // Primary condition: GPA >= 3.5
    // If GPA requirement met:
    //   - attendance >= 90%: Full scholarship
    //   - attendance >= 80%: Partial scholarship  
    //   - attendance < 80%: No scholarship (attendance too low)
    // If GPA < 3.5: Not eligible
    
    
    
    
    cout << endl;
    
    // ============================================
    // PART 3: Menu-Driven Calculator (switch)
    // ============================================
    cout << "=== PART 3: Calculator ===" << endl;
    
    int choice;
    double num1, num2, result;
    
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus (integers only)" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // TODO: Implement switch statement for calculator operations
    // Remember to handle division by zero
    // Include default case for invalid choices
    
    
    
    
    cout << endl;
    
   
    
    
    
    
    return 0;
}