#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    vector<string>b;
    int c;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>a;
        b.push_back(a);
    }
    sort(b.begin(),b.end());
    for(int i=0;i<c;i++)
        cout<<b[i]<<endl;

    return 0;
}
