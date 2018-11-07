#include<iostream>
#include<cstdio>
#include<string>


using namespace std;

int days_of_year(int year){
    if(year % 100 == 0)
        return (year % 400 == 0) ? 366 : 365;
    return (year % 4 == 0) ? 366 : 365;
}

int days_of_month(int month, int year){
    if(month == 2)
        return (days_of_year(year) == 366) ? 29 : 28;
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else return 30;
}


int main(){
    int a;
    string week[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    while((scanf("%d", &a) && a >= 0)){
        int year = 2000, month = 1, day = 1, weekday = a % 7;
        while(a){
            if(a >= days_of_year(year)) a -= days_of_year(year), year++;
            else if(a >= days_of_month(month, year)) a-= days_of_month(month, year), month++;
            else day += a, a = 0;
        }
        printf("%d-%02d-%02d ", year, month, day);
        cout<<week[weekday]<<endl;

    }


    return 0;
}
