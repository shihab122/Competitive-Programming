#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    map<int,vector<int> >a;
    //vector<int,vector<int>x;
    for(int i=0;i<n;i++){
        int b;
        scanf("%d",&b);
        a[b%m].push_back(b);
    }
    map<int,vector<int> >::iterator it;
    for(it=a.begin();it!=a.end();it++){
        if(it->second.size()>=k){
            printf("Yes\n");
            for(int j=0;j<k;j++)
                printf("%d ",it->second[j]);
            printf("\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}
