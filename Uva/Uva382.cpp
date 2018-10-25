#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[60000+1];
    memset(arr,0,sizeof(arr));
    for(int i=2;i<=60000;i++){
        if(arr[i]==0){
            for(int j=i+i;j<=60000;j+=i)
                arr[j]=1;
        }
    }

   int n,i=0;
   while(scanf("%d",&n)){
        if(i==0)printf("PERFECTION OUTPUT\n");
        if(n==0) break;
        int sum=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0&&n!=i){
                sum+=i;
                if(i<sqrt(n)&&i!=1) sum+=(n/i);
            }

        }
        if(n==sum){
            printf("%5d  PERFECT\n",n);
        }
        else if(n>sum) printf("%5d  DEFICIENT\n",n);
        else printf("%5d  ABUNDANT\n",n);
        i++;
   }




   /* int arr[60000+1];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=60000;i++){
        for(int j=i+i;j<60000;j+=i)
            arr[j]+=i;
    }
    int n,i=0;
    while(scanf("%d",&n)){
        if(i==0)printf("PERFECTION OUTPUT\n");
        if(n==0) break;
        else if(n==arr[n]){
            printf("%5d  PERFECT\n",n);
        }
        else if(n>arr[n]) printf("%5d  DEFICIENT\n",n);
        else printf("%5d  ABUNDANT\n",n);
        i++;
    }*/
    printf("END OF OUTPUT\n");

    return 0;
}
