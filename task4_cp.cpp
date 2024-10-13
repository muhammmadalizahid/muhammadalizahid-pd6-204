#include<iostream>
#include<string>
using namespace std;
string serviceType(char);
string amountDue(char,char,float, string);
int main()
{   char service,time;
    int minutes;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>service;
    string result1=serviceType(service);
    if(service=='p' || service=='P')
    {
       cout<<"Enter the time of the call (D/d for day, N/n for night): "; 
       cin>>time;
    }
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    cout<<result1<<endl;
    cout<<"Total Minutes Used: "<<minutes<<endl;
    string result2=amountDue(service, time, minutes, result1);
    cout<<result2;
}
string serviceType(char service)
{
    string output;
    if(service=='R' || service=='r')
    {
        output="Service Type: Regular";
    }
    else if(service=='P' || service=='p')
    {
        output="Service Type: Premium";
    }
    else
    {
        output="Error";
    }
    return output;
}
string amountDue(char service, char time, float minutes, string type)
{
    float amount;
    string result;     
    if(type=="Service Type: Regular")
    {
        if(minutes<=50)
        {
            amount=10;
        }
        else
        {   
            minutes=minutes-50;
            amount=(minutes*0.20)+10;
        }
    }
    else if(type=="Service Type: Premium")
    {
        if((time=='d' || time=='D') && (minutes<=75))
        {
            amount=25;
        }
        else if((time=='d' || time=='D') && (minutes>=75))
        {
            minutes=minutes-75;
            amount=(minutes*0.10)+25;
        }
        else if((time=='n' || time=='N') && (minutes<=100))
        {
            amount=25;
        }
        else if((time=='n' || time=='N') && (minutes>=100))
        {
            minutes=minutes-100;
            amount=(minutes*0.05)+25;
        }
    }
    result="Amount Due: $"+to_string(amount);
    return result;
}