#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    stack<char>st;
    int sz = a.size();
    for(int i = 0; i < sz; i++){
        string b = a.substr(i, sz - i);
        string c = b;
        reverse(b.begin(), b.end());
        if(b == c) break;
        st.push(a[i]);
    }
    while(!st.empty()){
        a.push_back(st.top());
        st.pop();
    }

    cout<<a<<endl;
    return 0;
}
