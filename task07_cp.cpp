#include<iostream>
#include<string>
using namespace std;
string checkStudentStatus(int examhr, int exammin, int studentr, int studentmin);
int main()
{
    int examhr, exammin, studentr, studentmin;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examhr;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>exammin;
    cout<<"Enter Student hour of arrival: ";
    cin>>studentr;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentmin;
    string result=checkStudentStatus(examhr,exammin,studentr,studentmin);
    cout<<result;
}
string checkStudentStatus(int examhr, int exammin, int studenthr, int studentmin)
{
    int time, time1;
    string result, output;
    if(examhr==studenthr && exammin==studentmin)
    {
        result="On time";
        output=result+"\n"+"Exactly at time";
    }
    else if(examhr==studenthr && exammin>studentmin)
    {
        time=exammin-studentmin;
        if(time<=30)
        {
            result="On time";
        }
        else
        {
            result="Early";
            
        }
        output=result+"\n"+to_string(time)+"before the start time."; 
    }
    else if(examhr==studenthr && exammin<studentmin)
    {
        time=studentmin-exammin;
        result="Late";
        output=result+"\n"+to_string(time)+" minutes after the start time.";
    }
    else if(examhr>studenthr && exammin==studentmin)
    {
        time=examhr-studenthr;
        result="Early";
        output=result+"\n"+to_string(time)+":0 hours before the start time.";
    }
    else if(examhr<studenthr && exammin==studentmin)
    {
        time=studenthr-examhr;
        result="Late";
        output=result+"\n"+to_string(time)+":0 hours after the start time.";
    }
    else if(examhr>studenthr && exammin>studentmin)
    {
        time=examhr-studenthr;
        time1=exammin-studentmin;
        result="Early";
        output=result+"\n"+to_string(time)+":"+to_string(time1)+" hours early before the time.";
    }
    else if(examhr<studenthr && exammin>studentmin)
    {
        time=studenthr-examhr;//3:50, 2:51
        time1=exammin-studentmin;
        int timef=60-time1;
        result="Late";
        output=result+"\n"+to_string(timef)+" minutes after the exam start.";
    }
    else if(examhr<studenthr && exammin<studentmin)
    {
        time=studenthr-examhr;
        time1=studentmin-exammin;
        result="Late";
        output=result+"\n"+to_string(time)+":"+to_string(time1)+" hours after the start.";
    }
    else if(examhr>studenthr && exammin<studentmin)
    {
        time=examhr-studenthr;//2:51,3:50
        time1=studentmin-exammin;
        int timef=60-time1;
        result="On time";
        output=result+"\n"+to_string(timef)+" minutes before the start.";
    }
    return output;
}