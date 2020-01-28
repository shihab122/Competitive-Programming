#include<stdio.h>
int main()
{
    int NUMBER,HOUR;
    double AMOUNT,SALARY;
    scanf("%d%d",&NUMBER,&HOUR);
    scanf("%lf",&AMOUNT);
    SALARY=AMOUNT*HOUR;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
