#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x = 0, y = 0, z = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            int a;
            scanf("%d", &a);
            if(j == 0) x += a;
            else if(j == 1) y += a;
            else z += a;
        }
    }
    if(x == 0 && y == 0 && z == 0) printf("YES\n");
    else printf("NO\n");


    return 0;
}
