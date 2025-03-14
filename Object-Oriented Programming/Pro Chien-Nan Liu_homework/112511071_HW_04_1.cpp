#include<iostream>
#include<iomanip>
using namespace std;

struct Score
{
    int Q1S;
    int Q2S;
    int MidS;
    int FinS;
    double Aver;
    char FLG;
};

int main()
{
    Score Student;
    cout << "Quiz 1 score (0-10), Quiz 2 score (0-10), Midterm score (0-100), Final score (0-100)" << endl;
    cin >> Student.Q1S >> Student.Q2S >> Student.MidS >> Student.FinS;
    Student.Aver = static_cast<double>(Student.FinS)*0.5 + static_cast<double>(Student.MidS)*0.25 + static_cast<double>((Student.Q1S + Student.Q2S)*10)*0.125;
    if(Student.Aver >= 90)
    {
        Student.FLG = 'A';
    }else if(Student.Aver >= 80)
    {
        Student.FLG = 'B';
    }else if(Student.Aver >= 70)
    {
        Student.FLG = 'C';
    }else if(Student.Aver >= 60)
    {
        Student.FLG = 'D';
    }else
    {
        Student.FLG = 'F';
    }
    cout << endl << "Student Record:" << endl;
    cout << "Quiz 1 score: " << Student.Q1S << endl;
    cout << "Quiz 2 score: " << Student.Q2S << endl;
    cout << "Midterm score: " << Student.MidS << endl;
    cout << "Final score: " << Student.FinS << endl;
    cout << "Average Score: " <<Student.Aver << endl;
    cout << "Grade: " << Student.FLG << endl;

    return 0;
}