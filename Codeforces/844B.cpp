#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c=0,p=1;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    vector<int>a,b;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int d;
            cin>>d;
            if(d==1) a.push_back(1);
            else b.push_back(0);
        }
    }
    int e=a.size(),f=b.size();
    if(e!=0) c++;
    if(f!=0) c++;
    while((e-p)>0||(f-p)>0){
        if ((e-p)>0) c+=e-p;
        if((f-p)>0) c+=f-p;
        p++;
    }
    printf("%d\n",c);
    return 0;
}
