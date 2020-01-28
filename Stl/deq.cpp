#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<int>a;
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int b;
        char f;
        cin>>b>>f;
        int x=a.size()-1;
        a.erase(a.begin()+x);
        if(f=='f')
            a.push_front(b);
        else
            a.push_back(b);
//        a.push(b);
    }
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl;
    return 0;
}
