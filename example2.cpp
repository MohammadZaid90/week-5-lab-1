#include<iostream>
using namespace std;

int big(int num1,int num2,int num3);

int main()
{
    int num1,num2,num3;

    cout<<"Enter the number 1: ";
    cin>>num1;
    
    cout<<"Enter the number 2: ";
    cin>>num2;
    
    cout<<"Enter the number 3: ";
    cin>>num3;

    int larger = big(num1,num2,num3);
    
    if(larger >  0 || larger < 0)
    {
        cout<<"The greater number is: "<<larger;
    }

    else if (larger == 0)
    {
        cout<<"Invalid Input";
    }
}

int big(int num1,int num2,int num3)
{
    int greatest;
    
    if(num1 > num2 && num1 > num3)
    {
        greatest = num1;
    }

    else if(num2 > num1 && num2 > num3)
    {
        greatest = num2;
    }

    else if(num3 > num1 && num3 > num2)
    {
        greatest = num3;
    }
    else
    {
        greatest = 0;
    }

    return greatest;
}