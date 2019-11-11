#include<bits/stdc++.h>

using namespace std;
int arr[500005];

int main(){
    char ch[] = {'[', ':', ']'};
    string s;
    cin>>s;
    int ans = 4, sz = s.size(), j = 0, u = -1, v = -1;
    for(int i = 0; i < sz; i++){
        for(int k = 0; k < 3; k++){
            if(ch[k] == s[i]){
                arr[i] = k + 1;
                break;
            }
            if(s[i] == '|') arr[i] = 4;
        }
    }

    int flag = 0;
    for(int i = 0; i < sz; i++){
        if(flag == 0 && arr[i] == 1) flag = 1;
        else if(flag == 1 && arr[i] == 2) flag = 2;
        if(flag == 2){
            u = i;
            break;
        }
    }

    if(u == -1){
        printf("-1\n");
        return 0;
    }
    flag = 0;
    for(int i = sz - 1; i > u; i--){
        if(flag == 0 && arr[i] == 3) flag = 1;
        else if(flag == 1 && arr[i] == 2) flag = 2;
        if(flag == 2){
            v = i;
            break;
        }
    }
    if(v == -1) printf("-1\n");
    else{
        for(int i = u; i < v; i++){
            if(arr[i] == 4) ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}
