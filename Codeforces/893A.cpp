#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>vc;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vc.push_back(a);
    }
    int s=3,p=2;
    for(int i=0;i<n;i++){
        if(vc[i]==s){
            printf("NO\n");
            return 0;
        }
        p=s;
        for(int j=1;j<=3;j++){
            if(j!=p&&j!=vc[i]){
                s=j;
            }
        }
    }
    printf("YES\n");

    return 0;
}
