#include<iostream>
using namespace std;

int VolleyBallYear(string check,float holidays,float weekends);

int main()
{
    string check;
    float holidays,weekends;

    cout<<"Confirm that year is leap or normal: ";
    cin>>check;

    cout<<"Enter the number of holidays: ";
    cin>>holidays;

    cout<<"Enter the number of weekends: ";
    cin>>weekends;

    float total = VolleyBallYear(check,holidays,weekends);
    cout<<total;
}

int VolleyBallYear(string check,float holidays,float weekends)
{
    float sofiweekends = ((48-weekends)*3)/4;
    float holiplay = (holidays*2)/3;
    float final = sofiweekends + holiplay + weekends;

    if(check == "leap")
    {
        final = final + ((final * 15)/100);
    }

    else if(check == "normal")
    {
        final;
    }

    return final;
}