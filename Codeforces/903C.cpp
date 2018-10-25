#include<bits/stdc++.h>

using namespace std;

int main(){
    int h1,a1,c1,h2,a2;
    vector<string>st;
    string s1="STRIKE",s2="HEAL";
    scanf("%d%d%d%d%d",&h1,&a1,&c1,&h2,&a2);
    while(1){
        if(h1>a2){
            st.push_back(s1);
            h1-=a2;
            h2-=a1;
            if(h2<=0) break;
        }
        else {
            st.push_back(s2);
            h1+=c1;
        }


    }
    cout<<st.size()<<endl;
    for(int i=0;i<st.size();i++) cout<<st[i]<<endl;

    return 0;
}
