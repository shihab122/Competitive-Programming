#include<bits/stdc++.h>

using namespace std;

int main(){
    char s,u;
    long long b;
    vector<int>arr;
    cin>>s>>u>>b;
    b%=4;
    int f=u;
    if(s==118){
        arr.push_back(60);
        arr.push_back(94);
        arr.push_back(62);
    }
    else if(s==60){
        arr.push_back(94);
        arr.push_back(62);
        arr.push_back(118);
    }
    else if(s==94){
        arr.push_back(62);
        arr.push_back(118);
        arr.push_back(60);
    }
    else{
        arr.push_back(118);
        arr.push_back(60);
        arr.push_back(94);
    }
    if(b==0)
        cout<<"undefined"<<endl;
    else if(arr[b-1]==f&&arr[(4-b)-1]!=f)
        cout<<"cw"<<endl;
    else if(arr[b-1]!=f&&arr[(4-b)-1]==f)
        cout<<"ccw"<<endl;
    else
        cout<<"undefined"<<endl;
    return 0;
}
