#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(arr[i][j] == 0) {
                    int flag = 0;
                    for(int row = 0; row < n; row++) {
                        if(arr[row][j]) {
                            flag = 1;
                            break;
                        }
                    }
                    for(int col = 0; col < m; col++) {
                        if(arr[i][col]) {
                            flag = 1;
                            break;
                        }
                    }
                    if(!flag) arr[i][j] = 1, cnt++;
                }
            }
        }
        if(cnt % 2 == 0) puts("Vivek");
        else puts("Ashish");

    }

    return 0;
}
