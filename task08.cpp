#include<iostream>
using namespace std;

float qatarFootball(float budget,float gmember,string categories);

int main()
{
    float budget,gmember;
    string categories;

    cout<<"Enter the total budget you have: ";
    cin>>budget;

    cout<<"Enter the  categories of the ticket (VIP/normal): ";
    cin>>categories;

    cout<<"Enter the total member of the group: ";
    cin>>gmember;

    float total = qatarFootball(budget,gmember,categories);

    if(total > 0)
    {
        cout<<"YES! You have "<<total<<" leva left";
    }

    else if(total < 0)
    {
        cout<<"NOT ENOUGH MONEY! You need "<<-1*(total)<<" leva";
    }
}

float qatarFootball(float budget,float gmember,string categories)
{
    float final;

    if(gmember <= 4 && gmember >= 1)
    {
        float a;
        a = budget-((budget*75)/100);
    
        if(categories == "VIP")
        {
            final = a - (499.99*gmember);
        }

        else if(categories == "normal")
        {
            final = a - (249.99*gmember);
        }
    }

    if(gmember <= 9 && gmember >= 5)
    {
        float a;
        a = budget-((budget*60)/100);
    
        if(categories == "VIP")
        {
            final = a - (499.99*gmember);
        }

        else if(categories == "normal")
        {
            final = a - (249.99*gmember);
        }
    }

    if(gmember <= 24 && gmember >= 10)
    {
        float a;
        a = budget-((budget*50)/100);
    
        if(categories == "VIP")
        {
            final = a - (499.99*gmember);
        }

        else if(categories == "normal")
        {
            final = a - (249.99*gmember);
        }
    }

    if(gmember <= 49 && gmember >= 25)
    {
        float a;
        a = budget-((budget*40)/100);
    
        if(categories == "VIP")
        {
            final = a - (499.99*gmember);
        }

        else if(categories == "normal")
        {
            final = a - (249.99*gmember);
        }
    }

    if(gmember >= 50)
    {
        float a;
        a = budget-((budget*25)/100);
    
        if(categories == "VIP")
        {
            final = a - (499.99*gmember);
        }

        else if(categories == "normal")
        {
            final = a - (249.99*gmember);
        }
    }

    return final;
}