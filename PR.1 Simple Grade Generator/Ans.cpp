#include <iostream>

using namespace std;

int main()
{
    int score;
    char grade;

    // Input score
    cout << "Enter your score (0-100): ";
    cin >> score;

    // Validate input
    if (score < 0 || score > 100)
    {
        cout << "Invalid score! Please enter a value between 0 and 100." << endl;
        return 1;
    }

    // Determine grade using ternary operator
    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                                : (score >= 70) ? 'C'
                                : (score >= 60) ? 'D'
                                                : 'F';

    // Output grade and comment using switch-case
    cout << "Your grade is " << grade << ". ";
    switch (grade)
    {
    case 'A':
        cout << "Excellent work!" << endl;
        break;
    case 'B':
        cout << "Well done!" << endl;
        break;
    case 'C':
        cout << "Good job!" << endl;
        break;
    case 'D':
        cout << "You passed, but you could do better." << endl;
        break;
    case 'F':
        cout << "Sorry, you failed." << endl;
        break;
    default:
        cout << "Unknown grade." << endl;
    }

    // Eligibility check using if-else
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    }
    else
    {
        cout << "Please try again next time." << endl;
    }

    return 0;
}
