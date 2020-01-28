#include<bits/stdc++.h>

using namespace std;

int main(){
//freopen("in.txt","w",stdout);
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
            int left=lower_bound(arr,arr+n,a)-arr;
            int right=upper_bound(arr,arr+n,b)-arr;
 //           cout<<left<<" "<<right<<endl;
            printf("%d\n",(right-left));
        }
    }
    return 0;
}
