#include<iostream>
using namespace std;
float calculateAverage(float, float, float, float, float);
string calculateGrade(float);
int main()
{
    string name;
    float english, maths, social, biology, chemistry;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>english;
    cout<<"Enter marks for Maths: ";
    cin>>maths;
    cout<<"Enter marks for Chemistry: ";
    cin>>chemistry;
    cout<<"Enter marks for Social Sciences:";
    cin>>social;
    cout<<"Enter marks for biology:";
    cin>>biology;
    float average=calculateAverage(english, maths, chemistry, social, biology);
    string result=calculateGrade(average);
    cout<<"Student Name: "<<name<<endl;
    cout<<"Percentage: "<<average*100.00<<"%"<<endl;
    cout<<"Grade: "<<result;
}
float calculateAverage(float english, float maths, float chemistry, float social, float biology)
{
    float average=(english+maths+chemistry+social+biology)/500;
    return average;
}
string calculateGrade(float average)
{
    float perc=average*100;
    string grade;
    if(perc<=100 && perc>=90)
    {
        grade="A+";
    }
    else if(perc<=89 && perc>=80)
    {
        grade="A";
    }
    else if(perc<=79 && perc>=70)
    {
        grade="B+";
    }
    else if(perc<=69 && perc>=60)
    {
        grade="B";
    }
    else if(perc<=59 && perc>=50)
    {
        grade="C";
    }
    else if(perc<=49 && perc>=40)
    {
        grade="D";
    }
    else if(perc<40)
    {
        grade="F";
    }
    else
    {
        grade="Invalid input";
    }
    return grade;
    

}