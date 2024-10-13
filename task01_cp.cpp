#include<iostream>
using namespace std;
string decideActivity(string temp, string hum);
int main()
{
    string temp,hum;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>hum;
    string result=decideActivity(temp, hum);
    cout<<result;
}
string decideActivity(string temp, string hum)
{
    string result;
    if(temp=="warm" && hum=="dry")
    {
        result = "Recommended activity: Play tennis";
    }
    else if(temp=="warm" && hum=="humid")
    {
        result = "Recommended activity: swim";
    }
    else if(temp=="cold" && hum=="dry")
    {
        result = "Recommended activity: Play basketball";
    }
    else if(temp=="cold" && hum=="humid")
    {
        result = "Recommended activity: Watch TV";
    }
    else
    {
        result="invalid input";
    }
    return result;
}