#include<bits/stdc++.h>

using namespace std;

struct ser{
    int u;
    int v;
    int c;
};

int main(){
    int x,sum=0,mx_a=0,mx_b=0,mx_c=0;
    cin>>x;
    ser p[x];
    vector<int>cost;
    for(int i=0;i<x-1;i++){
        int a,b,o;
        cin>>a>>b>>o;
      //  cost.push_back(o);
        ser t;
        t.u=a;
        t.v=b;
        t.c=o;
        p[i]=t;
        if(mx_c<o){
            mx_a=a;
            mx_b=b;
            mx_c=o;
        }
    }
    sum=mx_c;
    int e=mx_b;
            for(int j=0;j<x-1;j++){
                if(p[j].u==e){
                    sum+=p[j].c;
                    e=p[j].v;
                }
                else if(p[j].v==e){
                    sum+=p[j].c;
                    e=p[j].u;
                }
            }
        cost.push_back(sum);


    for(int i=0;i<x-1;i++){
        if(p[i].c==mx_c&&p[i].v==mx_b&&p[i].u==mx_a)
            continue;
        else{
            int e=p[i].v;
            sum=p[i].c;
            for(int j=0;j<x-1;j++){
                if(p[j].u==e){
                    sum+=p[j].c;
                    e=p[j].v;
                }
                else if(p[j].v==e){
                    sum+=p[j].c;
                    e=p[j].u;
                }
            }
        cost.push_back(sum);
        }
    }
    sort(cost.begin(),cost.end());
    cout<<cost[cost.size()-1]<<endl;
    return 0;
}
