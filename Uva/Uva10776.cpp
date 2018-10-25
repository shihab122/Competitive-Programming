#include<bits/stdc++.h>
#define mx 200

using namespace std;

bool taken[mx];
vector<char>vc;
char a[mx];
int b;
map<string,int>mp;

void Generate(int idx){
    if(idx==b){
        for(int i=0;i<b;i++) cout<<vc[i];
        cout<<endl;
    }
    for(int i=0;i<strlen(a);i++){
        if(vc.size()>0&&vc[vc.size()-1]>a[i]) continue;
        if(taken[i]==false){
            vc.push_back(a[i]);
            taken[i]=true;
            Generate(idx+1);
            vc.pop_back();
            taken[i]=false;

            while(a[i+1]==a[i]&&i+1<strlen(a)) i++;
        }
    }

}


int main(){
    //freopen("in.txt","w",stdout);
    while(scanf("%s %d",a,&b)!=EOF){
        mp.clear();
        memset(taken,false,sizeof(taken));
        sort(a,a+strlen(a));
        //cout<<a<<endl;
        Generate(0);

    }
    return 0;
}
