#include<bits/stdc++.h>

using namespace std;

struct node{
    int a,b;
};

bool operator <(node p,node q){
    if(p.a != q.a) return p.a > q.a;
    else return p.b > q.b;
}



int main(){
    priority_queue<node>vc;
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        int a,b;
        cin>>a>>b;
        node c;
        c.a = a;
        c.b = b;
        vc.push(c);
    }
    for(int i=0;i<n;i++){
        cout<<vc.top().a<<" "<<vc.top().b<<endl;
        vc.pop();
    }

    return 0;
}
