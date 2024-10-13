#include<iostream>
using namespace std;
string zodiac(int, string);
int main()
{
    string month;
    int day;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of brth: ";
    cin>>month;
    string result=zodiac(day, month);
    cout<<result;
}
string zodiac(int day, string month)
{
    string sign;
    if(((month=="March") && (day>=21 && day<=31)) || (month=="April") && (day>=1 && day<=19))
    {
         sign="Zodiac Sign: Aries";
    }
    else if(((month=="April") && (day>=20 && day<=30)) || (month=="May") && (day>=1 && day<=20))
    {
         sign="Zodiac Sign: Taurus";
    }
    else if(((month=="May") && (day>=21 && day<=31)) || (month=="June") && (day>=1 && day<=20))
    {
         sign="Zodiac Sign: Gemini";
    }
    else if(((month=="June") && (day>=21 && day<=31)) || (month=="July") && (day>=1 && day<=22))
    {
         sign="Zodiac Sign: Cancer";
    }
    else if(((month=="July") && (day>=23 && day<=30)) || (month=="August") && (day>=1 && day<=22))
    {
         sign="Zodiac Sign: Leo";
    }
    else if(((month=="August") && (day>=23 && day<=31)) || (month=="September") && (day>=1 && day<=22))
    {
         sign="Zodiac Sign: Virgo";
    }
    else if(((month=="September") && (day>=22 && day<=30)) || (month=="October") && (day>=1 && day<=22))
    {
         sign="Zodiac Sign: Libra";
    }
    else if(((month=="October") && (day>=23 && day<=31)) || (month=="November") && (day>=1 && day<=21))
    {
         sign="Zodiac Sign: Scorpio";
    }
    else if(((month=="November") && (day>=22 && day<=30)) || (month=="December") && (day>=1 && day<=21))
    {
         sign="Zodiac Sign: Sagittarius";
    }
    else if(((month=="December") && (day>=22 && day<=31)) || (month=="January") && (day>=1 && day<=19))
    {
         sign="Zodiac Sign: Capricon";
    }
    else if(((month=="January") && (day>=20 && day<=31)) || (month=="Februray") && (day>=1 && day<=18))
    {
         sign="Zodiac Sign: Aquarius";
    }
    else if(((month=="February") && (day>=20 && day<=29)) || (month=="March") && (day>=1 && day<=20))
    {
         sign="Zodiac Sign: Pisces";
    }
    else
    {
         sign="invalid input";
    }
    return sign;

}