#include<iostream>
using namespace std;

float totalIncome(string type,int row,int column);

int main()
{
    string type;
    int row,column;

    cout<<"Enter the type of the screenings: ";
    cin>>type;

    cout<<"Enter the number of rows: ";
    cin>>row;

    cout<<"Enter the number of column: ";
    cin>>column;

    float inc = totalIncome(type,row,column);
    cout<<"Your total income is: "<<inc;
}

float totalIncome(string type,int row,int column)
{
    float income;

    if(type == "premier")
    {
        income = row*column*12.00;
    }

    else if(type == "normal")
    {
        income = row*column*7.50;
    }

    else if(type == "discount")
    {
        income = row*column*5.00;
    }

    return income;
}
