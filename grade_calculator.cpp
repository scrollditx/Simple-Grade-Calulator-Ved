#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;

    cout << " Welcome to the Grade Calculator! \n";
    cout << "-------------------------------------\n";
    cout << " Please enter your score (0 - 100): ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << " Invalid score! Please enter a number between 0 and 100.\n";
        return 1;
    }

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 40) ? 'D' : 'F';

    cout << "\n Your Grade is: " << grade << "\n";

    switch (grade)
    {
        case 'A':
            cout << " Excellent Work! Keep shining! \n";
            break;
        case 'B':
            cout << " Well done! You're doing great!\n";
            break;
        case 'C':
            cout << " Good Job! Keep improving!\n";
            break;
        case 'D':
            cout << " You passed, but there's room for improvement.\n";
            break;
        default:
            cout << " Sorry, you failed. Don't give up!\n";
            break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << " Congratulations! You're eligible for the next level! \n";
    }
    else
    {
        cout << " Keep working hard and try again next time! \n";
    }

    cout << "-------------------------------------\n";
    cout << "Thanks for using the Grade Calculator. \n";

    return 0;
}
