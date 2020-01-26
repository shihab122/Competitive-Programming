#include<bits/stdc++.h>

using namespace std;

int main(){
    int f = 0;
    char ch[] = {'H', 'Q', '9'};

    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < 3; j++){
            if(ch[j] == s[i]) f = 1;
        }
        if(f == 1) break;
    }
    if(f == 1) printf("YES\n");
    else printf("NO\n");

}
