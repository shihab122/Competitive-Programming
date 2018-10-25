#include<bits/stdc++.h>

using namespace std;


int main(){
    int t,n;
    scanf("%d",&t);
    for(int tes=1;tes<=t;tes++){
        int arr[10];
        memset(arr,0,sizeof(arr));
        scanf("%d",&n);
        int sum=0;
        for(int j=0;j<=n;j++){
            int k=j;
            while(k>=1){
                arr[k%10]++;
                k/=10;
            }
        }
        for(int i=0;i<9;i++) cout<<arr[i]<<" ";
        cout<<arr[9];
        cout<<endl;
    }


    return 0;
}
