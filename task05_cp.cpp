#include<iostream>
using namespace std;
float calcFruitPrice(string fruit, string day, double quantity);
int main()
{
    string fruit, day;
    double  quan;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quan;
    float result=calcFruitPrice(fruit, day, quan);
    cout<<result; 
    
}
float calcFruitPrice(string fruit, string day, double quan)
{
    float amount;
    if(day=="Monday" || day=="Tuesay" || day=="Wednesday" || day=="Thursday" || day=="Friday")
    {
        if(fruit=="banana")
        {
            amount=2.50*quan;
            return amount;
        }
        else if(fruit=="apple")
        {
            amount=1.20*quan;
            return amount;
        }
        else if(fruit=="orange")
        {
            amount=0.85*quan;
            return amount;
        }
        else if(fruit=="grapefruit")
        {
            amount=1.45*quan;
            return amount;
        }
        else if(fruit=="kiwi")
        {
            amount=2.70*quan;
            return amount;
        }
        else if(fruit=="pineapple")
        {
            amount=5.50*quan;
            return amount;
        }
        else if(fruit=="grapes")
        {
            amount=3.85*quan;
            return amount;
        }
        else
        {
            cout<<"error";

        }
    }

    else if(day=="Sunday" || day=="Saturday") 
    {
        if(fruit=="banana")
        {
            amount=2.70*quan;
            return amount;
        }
        else if(fruit=="apple")
        {
            amount=1.25*quan;
            return amount;
        }
        else if(fruit=="orange")
        {
            amount=0.90*quan;
            return amount;
        }
        else if(fruit=="grapefruit")
        {
            amount=1.60*quan;
            return amount;
        }
        else if(fruit=="kiwi")
        {
            amount=3.00*quan;
            return amount;
        }
        else if(fruit=="pineapple")
        {
            amount=5.60*quan;
            return amount;
        }
        else if(fruit=="grapes")
        {
            amount=4.20*quan;
            return amount;
        }
        else
        {
            cout<<"error";
        }
    }
    else
    {
        cout<<"error";

    }
}   