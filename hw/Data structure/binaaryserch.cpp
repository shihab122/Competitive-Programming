#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[],int n,int number){
    int left=0,right=n-1;
    int index=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==number){
            index=mid;
            left=mid+1;
        }
        else if(arr[mid]<number) left=mid+1;
        else if(arr[mid]>number) right=mid-1;
    }
    return index;
}

int main(){
    int n,q;
    scanf("%d %d",&n,&q);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    sort(arr,arr+n);

    while(q--){
        int number;
        scanf("%d",&number);
        int ans=binarysearch(arr,n,number);
        if(ans>-1) printf("Found! %d\n",ans);
        else printf("Not Found!\n");
    }

    return 0;
}
