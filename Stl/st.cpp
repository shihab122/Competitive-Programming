#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int>a,b;
    set<int>::iterator it;
    for(int i=0;i<5;i++){
        int c;
        cin>>c;
        a.insert(c);
    }
    for(int i=0;i<5;i++){
        int c;
        cin>>c;
        b.insert(c);
    }
    a.swap(b);
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<endl;

    return 0;
}
