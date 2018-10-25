#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int a,b,c,x=0,d;
    vector<int>p,q,r,s;
    for(int i=0;i<4;i++){
        cin>>a>>b>>c>>d;
        if(i==0){
        p.push_back(a);
        p.push_back(b);
        p.push_back(c);
        p.push_back(d);
        }
        if(i==1){
        q.push_back(a);
        q.push_back(b);
        q.push_back(c);
        q.push_back(d);
        }
        if(i==2){
        r.push_back(a);
        r.push_back(b);
        r.push_back(c);
        r.push_back(d);
        }
        if(i==3){
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
        s.push_back(d);
        }
    }
    if((p[1]==1&&r[3]==1)||(r[1]==1&&p[3]==1)){
            cout<<"YES"<<endl;
            return 0;
    }
    if((q[1]==1&&s[3]==1)||(s[1]==1&&q[3]==1)){
            cout<<"YES"<<endl;
            return 0;
    }
    if(p[3]==1){
        if(q[0]==1||s[2]==1||p[1]==1||p[0]==1||p[2]==1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(q[3]==1){
        if(r[0]==1||p[2]==1||q[1]==1||q[0]==1||q[2]==1){
            cout<<"YES"<<endl;
            return 0;
    }
    }
    if(r[3]==1){
        if(s[0]==1||q[2]==1||r[1]==1||r[0]==1||r[2]==1){
            cout<<"YES"<<endl;
            return 0;
    }
    }
    if(s[3]==1){
        if(r[2]==1||p[0]==1||s[1]==1||s[0]==1||s[2]==1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
