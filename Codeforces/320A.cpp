#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    int f = 2;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') f = 0;
        else if(s[i] == '4' && f < 2) f++;
        else f = -1;
        if(f == -1) break;
    }

    if(f == -1) printf("NO\n");
    else printf("YES\n");

    return 0;
}
