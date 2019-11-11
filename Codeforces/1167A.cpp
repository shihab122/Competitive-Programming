#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, flag = 0;
        string s;
        scanf("%d", &n);
        cin>>s;
        while(s.size() >= 11){
            if(s[0] == '8'){
                flag = 1;
                break;
            }
            s.erase(0, 1);
        }
        if(flag == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
