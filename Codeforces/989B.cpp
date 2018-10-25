#include<bits/stdc++.h>

using namespace std;

int main(){
    int l, p, flag = 0, f = 0;
    scanf("%d %d",&l, &p);
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(i + p == l) break;
        else if(s[i] == s[i + p] && s[i] != '.') flag++;
        else if(s[i] == s[i + p] && s[i] == '.') s[i] = '0', s[i + p] = '1', f = 1;
        else if(f == 0 && s[i] == '.'){
            if(s[i + p] == '1') s[i] = '0';
            else s[i] = '1';
            f = 1;
        }
        else if(f == 0 && s[i + p] == '.'){
            if(s[i] == '1') s[i + p] = '0';
            else s[i + p] = '1';
            f = 1;
        }
        else f = 1;
    }

    if(f == 0) printf("No\n");
    else{
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '.') s[i] = '0';
        cout<<s<<endl;
    }


    return 0;
}
