#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n<=5){
        printf("-1\n");
        for(int i=2;i<=n;i++)printf("1 %d\n",i);
    }
    else{
        int k=n/2;
        for(int i=2;i<=k+1;i++) printf("1 %d\n",i);
        for(int i=k+2;i<=n;i++) printf("%d %d\n",k+1,i);
        //for(int i=2;i<n;i++) printf("1 %d\n",i);
        //printf("2 %d\n",n);
        for(int i=1;i<n;i++) cout<<i<<" "<<i+1<<endl;
    }

    return 0;
}
