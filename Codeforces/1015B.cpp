#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    string x, y;
    cin>>x;
    cin>>y;
    vector<int>ans;
    int u = x.size(), v = y.size();
    for(int i = 0; i < v; i++){
        if(x[i] != y[i]){
            int flag = 0;
            for(int j = u - 1; j >= (i + 1); j--){
                if(y[i] == x[j] || flag == 1){
                    ans.push_back(j);
                    flag = 1;
                    char c = x[j];
                    x[j] = x[j - 1];
                    x[j - 1] = c;
                }
            }
        }
    }
    u = ans.size();
    if(x != y){
        printf("-1\n");
        return 0;
    }
    printf("%d\n", u);
    for(int i = 0; i < u; i++)
        printf("%d ", ans[i]);

    return 0;
}
