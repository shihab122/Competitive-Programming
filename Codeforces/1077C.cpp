#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    ll arr[n], arr1[n], sum = 0;
    vector<int>vc;
    for(int i = 0; i < n; i++) scanf("%lld", &arr[i]), sum += arr[i], arr1[i] = arr[i];
    sort(arr1, arr1 + n);
    for(int i = 0; i < n; i++){
        ll p = sum;
        if(arr[i] == arr1[n - 1]){
            p -= arr[i];
            p -= arr1[n - 2];
            if(p == arr1[n - 2]) vc.push_back(i + 1);
        }
        else{
            p -= arr[i];
            p -= arr1[n - 1];
            if(p == arr1[n - 1]) vc.push_back(i + 1);
        }
    }
    printf("%d\n", vc.size());
    for(int i = 0; i < vc.size(); i++) printf("%d ", vc[i]);

    return 0;
}
