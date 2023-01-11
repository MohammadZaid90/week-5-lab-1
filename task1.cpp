#include<iostream>
using namespace std;

string calculateGrade(int marks);

int main()
{
    int marks;

    cout<<"Enter the Marks of the student: "<<endl;
    cin>>marks;

    string gr = calculateGrade(marks);
    cout<<"yoh have obtained "<<gr<<" grade";
}

string calculateGrade(int marks)
{
    string grade;

    if(marks < 50)
    {
        grade = "F";
    }

    else if(marks > 49 && marks < 61)
    {
        grade = "E";
    }

    else if(marks > 60 && marks < 71)
    {
        grade = "D";
    }

    else if(marks > 70 && marks < 81)
    {
        grade = "C";
    }

    else if(marks > 80 && marks < 85)
    {
        grade = "B";
    }

    else if(marks > 84)
    {
        grade = "A";
    }

    return grade;
}