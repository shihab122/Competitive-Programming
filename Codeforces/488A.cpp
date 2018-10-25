#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a;
    scanf("%lld",&a);
    for(int i=1;;i++){
        long long c=a;
        c+=i;

        while(c!=0){
            //cout<<"yes"<<endl;
            int d=abs(c%10);
            if(d==8){
                printf("%d\n",i);
                return 0;
            }
            c/=10;
            //cout<<c<<endl;
        }
    }
    return 0;
}
