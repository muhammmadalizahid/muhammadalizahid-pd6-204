#include<iostream>
#include<string>
using namespace std;
string calculateHotelPrice(string, int);
int main()
{
    string month;
    int days;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays :";
    cin>>days;
    string result=calculateHotelPrice(month,days);
    cout<<result;
}
string calculateHotelPrice(string month, int days)
{
    string output;
    float priceap, pricest;
    if(month=="May" || month=="October") 
    {
        if(days>7 && days<=14 )
        {
            priceap=65*0.95*days;
        }
        else if(days>14)
        {
            priceap=65*0.90*days;
            pricest=50*0.70*days;
        }
        else
        {
            priceap=65*days;
            pricest=50*days;
        }
    }
    else if(month=="June" || month=="September") 
    {
        if(days>14)
        {
            priceap=68.70*0.90*days;
            pricest=75.20*0.80*days;
        }
        else
        {
            priceap=68.70*days;
            pricest=75.20*days;
        }
    }
    else if(month=="July" || month=="August") 
    {
        if(days>14)
        {
            priceap=77*0.90*days;
            pricest=76*days;
        }
        else
        {
            priceap=77*days;
            pricest=76*days;
        }
    }
    output="Apartment: "+to_string(priceap)+"$\nStudio : "+to_string(pricest)+"$";
    return output;
    
}