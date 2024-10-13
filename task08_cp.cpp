#include<iostream>
using namespace std;
int calculateVBgames(string year, int holidays, int weekends);
int main()
{
    string type;
    int holidays,weekends;
    cout<<"Enter year type: ";
    cin>>type;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>weekends;
    int result=calculateVBgames(type, holidays, weekends);
    cout<<result;
}
int calculateVBgames(string year, int holidays, int weekends)
{
     float gameh,gamew,game_total,add;
     int gamesinteger;
     gameh=holidays*2/3;

     gamew=48-weekends;
     gamew=gamew*0.75;
     gamew=gamew+weekends;

     game_total=gameh+gamew;
     
     if(year=="normal")
     {
        gamesinteger=game_total;
     }
     else if(year=="leap")
     {
         game_total=game_total*1.15;
         gamesinteger=game_total;
     }
     return gamesinteger;
}