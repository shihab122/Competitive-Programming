#include<bits/stdc++.h>
#define mx 1000005

using namespace std;
typedef long long ll;

vector<int>arr(mx, true);
ll ans[mx];
vector<int>vc;


int main(){
    vc.push_back(2);
    int limit = sqrt(mx * 1) + 2;
    for(int i = 2; i < mx; i += 2) arr[i] = false;
    for(int i = 3; i < mx; i += 2){
        if(arr[i]){
            vc.push_back(i);
            if(i <= limit){
                for(int j = i * i; j < mx; j += i * 2){
                    arr[j] = false;
                }
            }
        }
    }

    ans[0] = 0;
    ans[1] = 0;
    for(int i = 2; i < mx; i++){
        ans[i] = 0;
        int temp = i, sq = sqrt(i);
        ll r = 0;
        for(int j = 0; j < vc.size() && vc[j] <= sq; j++){
            if(temp % vc[j] == 0){
                while(temp % vc[j] == 0){
                    r++;
                    temp /= vc[j];
                }
            }
        }
        if(temp != 1) r++;
        //cout<<i<<" "<<r<<" "<<temp<<endl;
        ans[i] = ans[i - 1] + r;
    }

    int a;
    while(scanf("%d", &a) != EOF){
        printf("%lld\n", ans[a]);
    }


    return 0;
}
