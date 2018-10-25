#include<bits/stdc++.h>
#define pii pair<int,int>
#define mx 1001


using namespace std;
vector<pii> divisor;

bool cmp(pii a, pii b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first > b.first;
}

int main(){
    divisor.push_back(pii(0, 0));
    for(int i = 1; i <= 1000; i++)
        divisor.push_back(pii(i, 1));

    for(int i = 2; i <= 1000; i++){
        for(int j = i; j <= 1000; j += i){
            divisor[j].second += 1;
        }
    }

    sort(divisor.begin(), divisor.end(), cmp);

    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int n;
        scanf("%d", &n);
        printf("Case %d: %d\n", tes, divisor[n].first);
    }


    return 0;
}
