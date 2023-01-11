#include<iostream>
using namespace std;

string speed(int spd);

int main()
{
    int spd;
    cout<<"Enter the speed: ";
    cin>>spd;

    string sd = speed(spd);
    cout<<"Speed is "<<sd;
}

string speed(int spd)
{
    string s;

    if(spd <= 10)
    {
        s = "slow";
    }

    else if(spd > 10 && spd <= 50)
    {
        s = "average";
    }

    else if(spd > 50 && spd <= 150)
    {
        s = "fast";
    }

    else if(spd > 150 && spd <= 1000)
    {
        s = "ultra fast";
    }

    else if(spd > 1000)
    {
        s = "extremely fast";
    }

    return s;
}