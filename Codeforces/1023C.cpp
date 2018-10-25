#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, j = 0, cnt = 0;
    scanf("%d %d", &x, &y);
    string a, ans = "";
    cin>>a;
    int open = 0, close = 0;
    while(1){
        if((open + close) == y) break;
        if(a[j] == '(' && open < (y/2)) open++, ans += '(';
        else if(a[j] == ')' && close < open) close++, ans += ')';
        j++;
    }

    cout<<ans<<endl;


    return 0;
}
