#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n<=2){
        printf("%d\n",n);
    }
    else{
        long long x=0,y;

            if(n%2!=0){
                y=(long long)n*(long long)(n-1)*(long long)(n-2);

            }
            else if(n%3!=0){
                y=(long long)n*(long long)(n-1)*(long long)(n-3);
            }
            else{
                y=(long long)(n-1)*(long long)(n-2)*(long long)(n-3);
            }
        cout<<y<<endl;
    }
    return 0;
}
