#include<iostream>
using namespace std;

class Grade
{
    private:
        double Q1;
        double Q2;
        double Mid;
        double Fin;
        double Aver;
        char Gra;
    public:
        void setQ1();
        void setQ2();
        void setMid();
        void setFin();
        void setAver();
        void setGra();
        void getQ1();
        void getQ2();
        void getMid();
        void getFin();
        void getAver();
        void getGra();
        void AverageScore();
        void GradeDeter();
};

void Grade::setQ1()
{
    double Q1s;
    cin >> Q1s;
    Q1 = Q1s;
}

void Grade::setQ2()
{
    double Q2s;
    cin >> Q2s;
    Q2 = Q2s;
}

void Grade::setMid()
{
    double Mids;
    cin >> Mids;
    Mid = Mids;
}

void Grade::setFin()
{
    double Fins;
    cin >> Fins;
    Fin = Fins;
}

void Grade::setAver()
{
    Grade::AverageScore();
}

void Grade::setGra()
{
    Grade::GradeDeter();
}

void Grade::getQ1()
{
    cout << "Quiz 1 score: " << Q1 << endl;
}

void Grade::getQ2()
{
    cout << "Quiz 2 score: " << Q2 << endl;
}

void Grade::getMid()
{
    cout << "Midterm score: " << Mid << endl;
}

void Grade::getFin()
{
    cout << "Final score: " << Fin << endl;
}

void Grade::getAver()
{
    cout << "Average Score: " << Aver << endl;
}

void Grade::getGra()
{
    cout << "Grade: " << Gra << endl;
}

void Grade::AverageScore()
{
    Aver = Fin*0.5 + Mid*0.25 + (Q1 + Q2)*10*0.125;
}

void Grade::GradeDeter()
{
    if(Aver >= 90)
    {
        Gra = 'A';
    }else if(Aver >= 80)
    {
        Gra = 'B';
    }else if(Aver >= 70)
    {
        Gra = 'C';
    }else if(Aver >= 60)
    {
        Gra = 'D';
    }else
    {
        Gra = 'F';
    }
}

int main()
{
    Grade Student;
    double a,b,c,d;
    cout << "Quiz 1 score (0-10), Quiz 2 score (0-10), Midterm score (0-100), Final score (0-100)" << endl;
    Student.setQ1();
    Student.setQ2();
    Student.setMid();
    Student.setFin();

    Student.AverageScore();
    Student.GradeDeter();

    cout << "Student Record:" << endl;
    Student.getQ1();
    Student.getQ2();
    Student.getMid();
    Student.getFin();
    Student.getAver();
    Student.getGra();

    return 0;
}