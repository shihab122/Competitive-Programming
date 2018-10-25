#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt","w",stdout);
    int t,tes=1;
    map<int,int>mp;
    while(scanf("%d",&t)){
        if(t==0) break;
        int mx=t;
        for(int i=1;i<=t;i++){
            int a;
            scanf("%d",&a);
            mx=max(mx,a);
            for(int j=1;j<=a;j++){
                int r;
                scanf("%d",&r);
                mp[r]=i;
            }
        }
        queue<int> qu[1001];
        string str;
        queue<int>comb;
        printf("Scenario #%d\n",tes++);
        while(cin>>str){
            if(str=="STOP") break;
            else if(str=="DEQUEUE"){
                int tem=comb.front();
                printf("%d\n",qu[tem].front());
                qu[tem].pop();
                if(qu[tem].empty()) comb.pop();
            }
            else{
                int c;
                scanf("%d",&c);
                int team=mp[c];
                if(qu[team].empty()) comb.push(team);
                qu[team].push(c);
            }

        }
        mp.clear();
        cout<<endl;
//        qu.clear();
    }


    return 0;
}
