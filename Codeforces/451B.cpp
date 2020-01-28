#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> vc(n + 1);
    for(int i = 1; i <= n; i++) scanf("%d", &vc[i]);
    int f = 1, s = 1;
    for(int i = 1; i < n; i++){
        if(vc[i] > vc[i + 1]){
            f = i;
            while(vc[i] > vc[i + 1] && i < n) i++;
            s = i;
        }
    }
    sort(vc.begin() + f, vc.begin() + s + 1);
    for(int i = 1; i < n; i++){
        if(vc[i] > vc[i + 1]){
            puts("no");
            return 0;
        }
    }
    puts("yes");
    printf("%d %d\n", f, s);
    return 0;
}
