#include<stdio.h>

int main(){
double t,v,s;
/*s=ut+.5t^2;
 =u*2t+.5*a(2t^2);
 =u*2t+.5*4*a*t^2;
 =u*2t+2*a*t^2;
 =2t(u+at);
 =2vt[v=u+at];*/
 scanf("%lf%lf",&t,&v);
 s=2*v*t;
 printf("%lf",s);
}
