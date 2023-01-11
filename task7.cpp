#include<iostream>
using namespace std;

bool checkboard(int a,int b,int c);

int main()
{
    int num1,num2,num3;
    cout<<"Enter the number 1: ";
    cin>>num1;
    
    cout<<"Enter the number 2: ";
    cin>>num2;

    cout<<"Enter the number 3: ";
    cin>>num3;

    int ckbd = checkboard(num1,num2,num3);
    
    if(ckbd == 1)
    {
        cout<<"yes";
    }

    else
    {
        cout<<"No";
    }
}

bool checkboard(int a,int b,int c)
{
    if(a == b && a == 3 || b == a && b == c || c == a && c == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}