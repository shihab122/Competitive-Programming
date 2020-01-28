#include<stdio.h>

int main(){
int salary;
float year,total,interest,monthly_amount;
scanf("%d%f%f",&salary,&year,&interest);
total=salary+((salary*interest*year)/100);
monthly_amount=total/(year*12);
printf("Total amount:%f\n",total);
printf("Monthly amount:%f\n",monthly_amount);
return 0;
}
