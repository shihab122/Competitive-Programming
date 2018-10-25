#include<bits/stdc++.h>

using namespace std;

int binaryhi(int arr[],int n,int val1,int val2){
    int low=0,high=n;
    while(low<=high&&low<n&&high<=n){
        int mid=(low+high)/2;
        if(arr[mid]<=val2&&arr[mid]>=val1) low=mid+1;
        else if(arr[mid]>val2) high=mid-1;
        else if(arr[mid]<val1) low=mid+1;
    }
    return low;
}

int binarylw(int arr[],int n,int val1,int val2){
    int low=0,high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=val2&&arr[mid]>=val1) high=mid-1;
        else if(arr[mid]>val2) high=mid-1;
        else if(arr[mid]<val1) low=mid+1;
    }
    return low;
}

int main(){
 freopen("in.txt","w",stdout);
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n,q;
        scanf("%d%d",&n,&q);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        printf("Case %d:\n",++cnt);
        for(int i=0;i<q;i++){
            int a,b;
            scanf("%d%d",&a,&b);
/*            if(a<arr[0]&&b<arr[0]) printf("0\n");
            else if(a>arr[n-1]&&b>arr[n-1]) printf("0\n");
            else{
            */
                int in1=binarylw(arr,n,a,b);
                int in2=binaryhi(arr,n,a,b);
                in1=(in2-in1);
            //    if(in1<0) printf("0\n");
                printf("%d\n",in1);
        }
    }
    return 0;
}
