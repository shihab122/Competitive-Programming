#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,i=0;
    scanf("%d:%d",&a,&b);
    while(1){
        if((a/10==b%10)&&(b/10==a%10)) break;

        b++;
        if(b>=60){
            b%=60;
            a++;
        }
        if(a>=24)a%=24;

        i++;
    }
    cout<<i<<endl;
    return 0;
}
/*
05:39
11*/
/*
13:31
0*/
/*
23:59
1*/

