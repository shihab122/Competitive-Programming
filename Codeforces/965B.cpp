#include<bits/stdc++.h>


using namespace std;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    vector<string>vc;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        vc.push_back(s);
    }

    int cnt=0,row=0,col=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vc[i][j]=='.'){
                int a=0,b=0,c=0,d=0;
                for(int k=i;k<n;k++){
                    if(vc[k][j]=='#') break;
                    a++;
                }
                for(int k=i;k>=0;k--){
                    if(vc[k][j]=='#') break;
                    b++;
                }
                for(int k=j;k<n;k++){
                    if(vc[i][k]=='#') break;
                    c++;
                }
                for(int k=j;k>=0;k--){
                    if(vc[i][k]=='#') break;
                    d++;
                }
                a=min(a,k);
                b=min(b,k);
                c=min(c,k);
                d=min(d,k);
                int mx=max(0,a+b-k)+max(0,c+d-k);
                if(mx>cnt) {
                    cnt=mx;
                    row=i+1;
                    col=j+1;
                }
            }
        }
    }
    printf("%d %d\n",row,col);

    return 0;
}
