#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;

    int sz = a.size() - 7;
    for(int i = 0; i <= sz; i++){
        string s = a.substr(i, 7);
        if(s == "1111111" || s == "0000000"){
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
