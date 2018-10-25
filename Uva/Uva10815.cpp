#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    set<string>st;
    int n = 0;
    while(getline(cin, a)){
        string s = "";
        for(int i = 0; i < a.size(); i++){
            if(a[i] >= 'a' && a[i] <= 'z'){
                s.push_back(tolower(a[i]));
            }
            else if(a[i] >= 'A' && a[i] <= 'Z'){
                s.push_back(tolower(a[i]));
            }
            else if(s.size() != 0){
                st.insert(s);
                s = "";
            }
        }
        if(s.size() != 0) st.insert(s);
    }

    set<string>:: iterator it;
    for(it = st.begin(); it != st.end(); it++){
        cout<<*it<<endl;
    }


    return 0;
}
