#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    queue<int>u;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        u.push(b);
    }
    while(!u.empty()){
        cout<<u.front()<<endl;
        u.pop();
    }
    return 0;
}
