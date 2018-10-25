#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    string s;
    cin>>s;
    int cnt = 0;
    char c;
    for(int i = 0; i < n; i++){
        if(i == 0) c = s[i];
        else if(s[i] == c) cnt++;
        else c = s[i];
    }
    printf("%d\n", cnt);

    return 0;
}
