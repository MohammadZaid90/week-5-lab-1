#include<iostream>
using namespace std;

float travel(int kilometer,string period);

int main()
{
    int kilometer;
    string period;

    cout<<"Enter the number of kilometer you travel: ";
    cin>>kilometer;

    cout<<"Enter the time in which you travel: ";\
    cin>>period;

    float cheap = travel(kilometer,period);
    cout<<cheap<<" EUR for "<<kilometer<<" kms";
}

float travel(int kilometer,string period)
{
    float total;

    if((kilometer <  20 && period == "day"))
    {
        total = kilometer*0.79+0.70;
        cout<<"taxi is cheaper at "<<period<<" ";
    }

    else if((kilometer <  20 && period == "night"))
    {
        total = kilometer*0.90+0.70;
        cout<<"taxi is cheaper at "<<period<<" ";
    }

    else if((kilometer >=  20 && kilometer < 100 ) && (period == "day" || period == "night"))
    {
        total = kilometer*0.09;
        cout<<"bus is cheaper at "<<period<<" ";
    }

    else if((kilometer >=  100) && (period == "day" || period == "night"))
    {
        total = kilometer*0.06;
        cout<<"train is cheaper at "<<period<<" ";
    }
    return total;
}

