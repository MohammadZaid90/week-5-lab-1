#include<iostream>
using namespace std;

float checkCost(string product,string city,int quantity);

int main()
{
    string product,city;
    int quantity;
    
    cout<<"Enter the product name: ";
    cin>>product;

    cout<<"Enter the city name: ";
    cin>>city;

    cout<<"Enter the quantity: ";
    cin>>quantity;

    float ttl = checkCost(product,city,quantity);
    cout<<ttl;
}

float checkCost(string product,string city,int quantity)
{
    float final;

    if(product == "coffee")
    {
        if(city == "sofia")
        {
            final = quantity*0.50;
        }
        else if(city == "plovdiv")
        {
            final = quantity*0.40;
        }
        else if(city == "varna")
        {
            final = quantity*0.45;
        }
    }

    if(product == "water")
    {
        if(city == "sofia")
        {
            final = quantity*0.80;
        }
        else if(city == "plovdiv")
        {
            final = quantity*0.70;
        }
        else if(city == "varna")
        {
            final = quantity*0.70;
        }
    }

    if(product == "beer")
    {
        if(city == "sofia")
        {
            final = quantity*1.20;
        }
        else if(city == "plovdiv")
        {
            final = quantity*1.15;
        }
        else if(city == "varna")
        {
            final = quantity*1.10;
        }
    }

    else if(product == "sweets")
    {
        if(city == "sofia")
        {
            final = quantity*1.45;
        }
        else if(city == "plovdiv")
        {
            final = quantity*1.30;
        }
        else if(city == "varna")
        {
            final = quantity*1.35;
        }
    }

    else if(product == "peanuts")
    {
        if(city == "sofia")
        {
            final = quantity*1.60;
        }
        else if(city == "plovdiv")
        {
            final = quantity*1.50;
        }
        else if(city == "varna")
        {
            final = quantity*1.55;
        }
    }

    return final;
}