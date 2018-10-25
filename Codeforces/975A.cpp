#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define Mp make_pair
using namespace std;

int main(){
    int n;
    cin>>n;
    set<set<char> >st;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;

        st.insert(set<char>(a.begin(),a.end()));


    }
    cout<<st.size()<<endl;

    return 0;
}
