#include<iostream>
using namespace std;

int discount(int price,string day,string month);

int main()
{
    int price;
    string day,month;

    cout<<"Enter the total Perchase ammount: ";
    cin>>price;

    cout<<"Enter the Day: ";
    cin>>day;

    cout<<"Enter the month: ";
    cin>>month;

    int dis = discount(price,day,month);
    cout<<"You have to pay: "<<dis;

}

int discount(int price,string day,string month)
{
    int discount = 0;

    if(day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        discount = price-((price * 10)/100);
    }

    else if(day == "monday" && (month == "november" || month == "december"))
    {
        discount = price - ((price * 5)/100);
    }
    else
    {
        discount = price;
    }

    return discount;
}