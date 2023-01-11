#include<iostream>
using namespace std;

int main()
{
    int price;
    string brand;
    cout<<"Enter the price of dress: ";
    cin>>price;

    cout<<"Enter the brand of dress: ";
    cin>>brand;
    
    if(brand == "breakout" && price <= 1500)
    {
        cout<<"Buy the dress"<<endl;
    }

    else
    {
        cout<<"Do not buy the dress"<<endl;
    }
}