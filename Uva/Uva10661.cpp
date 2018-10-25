#include<bits/stdc++.h>

using namespace std;

int binarylw(int arr[],int n,int val){
    int low=0,high=n,inde=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==val) high=mid-1;
        else if(arr[mid]>val) high=mid-1;
        else if(arr[mid]<val) low=mid+1;
    }
    return low-1;

}
int binaryhi(int arr[],int n,int val){
    int low=0,high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=val) low=mid+1;
        else if(arr[mid]>val) high=mid-1;
        else if(arr[mid]<val) low=mid+1;
    }
    return low;

}

int main(){
   // freopen("in.txt","w",stdout);
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",arr+i);

    int b;
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        int c;
        scanf("%d",&c);
        //sort(arr,arr+n);
/*        int r=upper_bound(arr,arr+n,c)-arr;
        int l=lower_bound(arr,arr+n,c)-arr;
       // cout<<arr[r+1]<<endl;
        if(r<n&&l<=n&&l>0) printf("%d %d\n",arr[l-1],arr[r]);
        else if(r>=n&&l>0&&l<=n) printf("%d X\n",arr[l-1]);
        else if(r<n&&l<=0) printf("X %d\n",arr[r]);
        else printf("X X\n");
  */
        int r=binaryhi(arr,n,c);
        int l=binarylw(arr,n,c);
        if(r<n&&l>-1) printf("%d %d\n",arr[l],arr[r]);
        else if(r>=n&&l>-1) printf("%d X\n",arr[l]);
        else if(r<n&&l<0) printf("X %d\n",arr[r]);
        else printf("X X\n");
    }

    return 0;
}
