#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;

    cout << " Welcome to the Grade Calculator!"<< endl;
    cout << "-------------------------------------"<< endl;
    cout << " Please enter your score (0 - 100): ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << " Invalid score! Please enter a number between 0 and 100." << endl;
        return 0;
    }

    grade = (score >= 90)   ? 'A'
            : (score >= 80) ? 'B'
            : (score >= 70) ? 'C'
            : (score >= 40) ? 'D'
                            : 'F';

    cout << " Your Grade is: " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << " Excellent Work! " << endl;
        break;
    case 'B':
        cout << " Well done!" << endl;
        break;
    case 'C':
        cout << " Good Job!" << endl;
        break;
    case 'D':
        cout << " You passed, but you could do better." << endl;
        break;
    default:
        cout << " Sorry, you failed." << endl;
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << " Congratulations! You're eligible for the next level! " << endl;
    }
    else
    {
        cout << " Keep working hard and try again next time! " << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << "Thanks for using the Grade Calculator. " << endl;

    return 0;
}
