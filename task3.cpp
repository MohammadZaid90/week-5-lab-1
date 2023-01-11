#include<iostream>
using namespace std;

string checkTitle(char gender,int age);

int main()
{
    char gender;
    int age;

    cout<<"Enter the Gender (m/f): ";
    cin>>gender;

    cout<<"Enter the age: ";
    cin>>age;

    string ttl = checkTitle(gender,age);
    cout<<"Your title is: "<<ttl;
}

string checkTitle(char gender,int age)
{
    string title;

    if(gender == 'm' && age >= 16)
    {
        title = "Mr.";
    }

    else if(gender == 'm' && age < 16)
    {
        title = "Master";
    }

    else if(gender == 'f' && age >= 16)
    {
        title = "Ms.";
    }

    else if(gender == 'f' && age < 16)
    {
        title = "Miss";
    }

    return title;
}