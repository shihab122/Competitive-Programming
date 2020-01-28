#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    stack<int>u;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        u.push(b);
    }
//    sort(u.begin(),u.end());
    while(!u.empty()){
        cout<<u.top()<<endl;
        u.pop();
    }
    return 0;
}
