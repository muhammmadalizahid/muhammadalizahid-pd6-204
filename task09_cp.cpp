#include<iostream>
using namespace std;
string checkposition(int heigt ,int x,int y);
int main()
{
     int height,x,y;
     cout<<"Enter height: ";
     cin>>height;
     cout<<"Enter x coordinate: ";
     cin>>x;
     cout<<"Enter y coordinate: ";
     cin>>y;
     string result=checkposition(height,x,y);
     cout<<result;
}
 
string checkposition(int h,int x,int y)
{
    string pos;
    if((x>=0 && x<=3*h && y==0) || (x==0 && y==h) || (x==h && y==h) || (x==h && (y>=h || y<=4*h)) || ((x>=h || x<=2*h) && y==4*h) || (x==2*h && (y<=4*h || y>=h)) || ((x>=2*h || x<=3*h) && y==h) || (x==3*h && (y<=h || y>=0)))
    {
        pos="Border";
    }
    else if((x>0 && x<h && y>0 && y<h)||(x>h && x<2*h && y>0 && y<4*h) || (x>2*h && x<3*h && y>0 && y<h))
    {
        pos="Inside";
    }
    else
    {
        pos="Outside";
    }
    return pos;
}

