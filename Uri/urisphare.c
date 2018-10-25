#include<stdio.h>
#define pi 3.14159

int main(){
    double R,c;
    scanf("%lf",&R);
    c=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",c);
    return 0;
}
