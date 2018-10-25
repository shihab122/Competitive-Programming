#include<bits/stdc++.h>
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define SQ(a) (a)*(a)

using namespace std;
typedef long long ll;

int main(){
    int n,m,mn=INT_MAX;
    scanf("%d %d",&n,&m);
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=m;i++){
        int c;
        scanf("%d",&c);
        arr[c]++;
    }
    for(int i=1;i<=n;i++) mn=min(mn,arr[i]);
    printf("%d\n",mn);

    return 0;
}

