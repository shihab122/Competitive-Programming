#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
struct ii{
    int a,b;
}arr[110];

bool cmp(ii A,ii B){
    if(A.a!=B.a) return A.a<B.a;
    else return A.b <B.b;
}

int main(){
    int m,n,x,y;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i].a,&arr[i].b);
    }
    sort(arr,arr+n,cmp);
    x=arr[0].b;
    if(arr[0].a>0){
        printf("NO\n");
        return 0;
    }
    for(int i=1;i<n;i++){
        y=arr[i].a;
        //cout<<x<<" "<<y<<endl;
        if(x>=y) x=max(x,arr[i].b);
        else if(x>=m){
            printf("YES\n");
            return 0;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    if(x>=m) printf("YES\n");
    else printf("NO\n");
    return 0;
}
