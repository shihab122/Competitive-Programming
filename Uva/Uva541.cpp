#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d", &n)){
        if(n == 0) break;
        int arr[n][n];
        int row[n];
        int col[n];
        vector<pair<int, int> > ans;
        pair<int, int> p;

        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d", &arr[i][j]);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                col[j] += arr[i][j];
                row[i] += arr[i][j];
            }
        }

        int f = 2;
        for(int i = 0; i < n; i++){
            if(col[i] % 2 != 0){
                f = 0;
                for(int j = 0; j < n; j++){
                    if(row[j] % 2 != 0){
                        f = 1;
                        p.first = j + 1;
                        p.second = i + 1;
                        ans.push_back(p);
                        row[j]++;
                        break;
                    }
                }
            }
            if(f == 0) break;
        }

        for(int i = 0; i < n; i++){
            if(row[i] % 2 != 0){
                f = 0;
                break;
            }
        }

        if(f == 2) printf("OK\n");
        else if(f == 0 || ans.size() > 1) printf("Corrupt\n");
        else{
            printf("Change bit");
            for(int i = 0; i < ans.size(); i++)
                printf(" (%d,%d)", ans[i].first, ans[i].second);
            printf("\n");
        }
        ans.clear();

    }


    return 0;
}
