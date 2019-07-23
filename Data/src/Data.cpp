#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{
    day=1;
    month=1;
    year=1;
        //ctor
}
Data::Data(int day, int month, int year)
    : Data()
{
    setDay(day);
    setMonth(month);
    setYear(year);

    if(month>12)
        {
            cout << "Mes invalido" << month << endl;
        }

    if(month==2)
    {
        if(day>28)
        {
            cout << "Dia invalido" << day << endl;
        }
    }

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        if(day>31)
        {
            cout << "Dia invalido" << day << endl;
        }
    }
    if(month==4 || month==6 || month==9 || month==11)
    {
        if(day>30)
        {
            cout << "Dia invalido" << day << endl;
        }
    }
}

void Data::setDay(int day)
{
    if(day<1||day>31)
    {
        cout<<"dia invalido"<<endl;
    }else{
        this->day = day;
    }
}

void Data::setMonth(int month)
{
    if(month<1||month>12)
    {
        cout<<"mes invalido"<<endl;
    }else{
        this->month = month;
    }
}

void Data::setYear(int year)
{
    this->year = year;
}

void Data::avancarDia()
{
    day++;

    if(month==12 && day>31)
    {
        day=1;
        month=1;
        year++;
    }else if(month==2 && day>28)
    {
        day=1;
        month++;
    }else if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && day>31)
    {
        day=1;
        month++;
    }else if((month==4 || month==6 || month==9 || month==11) && day>30)
    {
        day=1;
        month++;
    }
}

int Data::getDay()
{
    return day;
}

int Data::getMonth()
{
    return month;
}

int Data::getYear()
{
    return year;
}
