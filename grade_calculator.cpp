#include <iostream>
using namespace std;

int main ()
{
    int score;
    char grade;
    string msg;
    
    cout << "Enter your Score (0-100): ";
    cin >> score;

    grade = (score >= 90) ? 'A':    
            (score >= 80) ? 'B':    
            (score >= 70) ? 'C':    
            (score >= 40) ? 'D':
            'F';

    cout <<"Your Grade is: " << grade << " ";
    
    switch (grade)
    {
    case 'A':
        cout << "Excellent Work!"<< " ";
        break;
    case 'B':
        cout << "Well done!"<< " ";
        break;
    case 'C':
        cout << "Good Job!"<< " ";
        break;
    case 'D':
        cout << "You Passed, but you could do better"<< " ";
        break;
    default:
        cout << "Sorry,you failed!"<< " ";
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "Congratulations! You are eligible for the next level." << " ";
    }
    else
    {
        cout << "Please try again next time." << " ";
    }
    
    return 0;
}