#include<bits/stdc++.h>

using namespace std;

int main(){
    int ans[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            ans[i][j] = 1;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int c;
            scanf("%d", &c);
            c = c % 2;
            ans[i][j] ^= c;
            ans[i + 1][j] ^= c;
            ans[i][j + 1] ^= c;
            ans[i - 1][j] ^= c;
            ans[i][j - 1] ^= c;

        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d",ans[i][j]);
        }
        printf("\n");
    }



    return 0;
}
