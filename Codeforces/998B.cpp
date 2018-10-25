#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, b;
    scanf("%d %d", &n, &b);
    int arr[n], e = 0, o = 0, ans = 0, val = 0;

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    vector<int>vc;
    for(int i = 0; i < n - 1; i++){
        val++;
        int x = abs(arr[i] - arr[i + 1]);
        if(arr[i] % 2 == 0) e++;
        else o++;
        //cout<<x<<" "<<val<<" "<<o<<" "<<e<<endl;
        if(x <= b && val > 1 && o == e){
            o = 0, e = 0;
            vc.push_back(x);
            val = 0;
        }
    }
    sort(vc.begin(), vc.end());
    for(int i = 0; i < vc.size(); i++){
        if(vc[i] > b) break;
        else ans++, b-=vc[i];
    }
    printf("%d\n", ans);


    return 0;
}
