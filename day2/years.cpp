#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    bool isLeapYear;
    cout<<"Enter the year: ";
    cin>>year;
    isLeapYear = (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));
    if(isLeapYear) 
    {
        cout<<year<<"是闰年"<<endl;
    }
    else
    {
        cout<<year<<"不是闰年"<<endl;
    }
    system("pause");
    return 0;
}