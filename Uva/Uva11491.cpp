#include<bits/stdc++.h>
#define mx 200

using namespace std;

bool taken[mx];
vector<char>vc;
char a[mx];
int n, b;
map<string,int>mp;

void Generate(int idx){
    if(idx==b){
        for(int i=0;i<b;i++) cout<<vc[i];
        cout<<endl;
    }
    for(int i=idx;i<n;i++){
        if(taken[i]==false){
            vc.push_back(a[i]);
            taken[i]=true;
            Generate(i+1);
            vc.pop_back();
            taken[i]=false;

        }
    }

}

int main(){
    while(scanf("%d %d", &n, &b)){
        if(n == 0 && b == 0) break;
        mp.clear();
        scanf("%s", a);
        memset(taken,false,sizeof(taken));
        Generate(0);
    }

    return 0;
}
