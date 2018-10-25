#include<bits/stdc++.h>


using namespace std;
typedef long long ll;

vector<int>vc;
bool mark[1005];

void seive(int n){
    memset(mark, false, sizeof(mark));

    int limit = sqrt(n * 1) + 2;
    mark[1] = true;

    for(int i = 4; i <= n; i+=2) mark[i] = true;
    vc.push_back(2);

    for(int i = 3; i <= n; i++){
        if(mark[i] == false){
            vc.push_back(i);
            if(i <= limit){
                for(int j = i * i; j <= n; j += (i*2)){
                    mark[j] = true;
                }
            }
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    if(n == 1){
        printf("0\n");
        return 0;
    }
    seive(n);
    vector<int>ans;
    int sz = vc.size();

    for(int i = 0; i < sz; i++){
        int q = 1;
        while(q <= (n / vc[i])){
            q *= vc[i];
            ans.push_back(q);
        }
    }
    sz = ans.size();

    printf("%d\n", sz);
    for(int i = 0; i < sz; i++)
        printf("%d ", ans[i]);
    printf("\n");

    return 0;
}
