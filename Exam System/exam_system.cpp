#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to represent a question
class Question
{
public:
    string questionText;
    string option1;
    string option2;
    string option3;
    string option4;
    int correctOption;

    Question(string q, string o1, string o2, string o3, string o4, int correct)
    {
        questionText = q;
        option1 = o1;
        option2 = o2;
        option3 = o3;
        option4 = o4;
        correctOption = correct;
    }

    // Display the question with options
    void display()
    {
        cout << questionText << endl;
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cout << "3. " << option3 << endl;
        cout << "4. " << option4 << endl;
    }

    // Check if the user's answer is correct
    bool isCorrect(int userAnswer)
    {
        return userAnswer == correctOption;
    }
};

class Exam
{
private:
    vector<Question> questions;
    int correctAnswers = 0;
    int wrongAnswers = 0;

public:
    // Add a new question to the exam
    void addQuestion()
    {
        string q, o1, o2, o3, o4;
        int correctOption;

        cout << "Enter the question: ";
        cin.ignore(); // to clear the buffer
        getline(cin, q);

        cout << "Enter option 1: ";
        getline(cin, o1);
        cout << "Enter option 2: ";
        getline(cin, o2);
        cout << "Enter option 3: ";
        getline(cin, o3);
        cout << "Enter option 4: ";
        getline(cin, o4);

        cout << "Enter the correct option (1-4): ";
        cin >> correctOption;

        // Add the question to the list
        questions.push_back(Question(q, o1, o2, o3, o4, correctOption));
        cout << "Question added successfully!" << endl;
    }

    // Predefined questions related to C++
    void addPredefinedQuestions()
    {
        questions.push_back(Question("What is the size of an int in C++?",
                                     "2 bytes", "4 bytes", "8 bytes", "16 bytes", 2));
        questions.push_back(Question("Which of the following is used to define a constant in C++?",
                                     "#define", "const", "final", "constant", 2));
        questions.push_back(Question("Which of the following is the correct way to declare a pointer in C++?",
                                     "int ptr;", "ptr int;", "int* ptr;", "ptr* int;", 3));
        questions.push_back(Question("What is the default value of a static variable in C++?",
                                     "1", "0", "null", "undefined", 2));
        questions.push_back(Question("Which of the following is used for memory allocation in C++?",
                                     "malloc()", "calloc()", "new", "allocate()", 3));
    }

    // Display all the questions and process the user's answers
    void startExam()
    {
        if (questions.empty())
        {
            cout << "No questions available!" << endl;
            return;
        }

        for (int i = 0; i < questions.size(); ++i)
        {
            cout << "\nQuestion " << i + 1 << ":\n";
            questions[i].display();

            int userAnswer;
            cout << "Enter your answer (1-4): ";
            cin >> userAnswer;

            if (questions[i].isCorrect(userAnswer))
            {
                // Correct answer (Green color)
                cout << "\033[1;32mCorrect!\033[0m" << endl;
                correctAnswers++;
            }
            else
            {
                // Incorrect answer (Red color)
                cout << "\033[1;31mWrong!\033[0m" << endl;
                wrongAnswers++;
            }
        }

        // After finishing the exam, show the result
        cout << "\nExam completed!" << endl;
        cout << "Correct Answers: " << correctAnswers << endl;
        cout << "Wrong Answers: " << wrongAnswers << endl;

        if (correctAnswers >= questions.size() / 2)
        {
            cout << "You passed the exam!" << endl;
        }
        else
        {
            cout << "You failed the exam. Better luck next time!" << endl;
        }
    }

    // Exit the exam system
    void exitExam()
    {
        cout << "Exiting the exam system. Goodbye!" << endl;
    }
};

int main()
{
    Exam exam;
    int choice;

    // Add predefined C++ questions
    exam.addPredefinedQuestions();

    while (true)
    {
        cout << "\nExam System Menu:\n";
        cout << "1. Add a question\n";
        cout << "2. Start the exam\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            exam.addQuestion();
            break;
        case 2:
            exam.startExam();
            break;
        case 0:
            exam.exitExam();
            return 0; // Exit the program
        default:
            cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}
