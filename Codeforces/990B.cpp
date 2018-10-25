#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d",&n, &k);

    vector<int>vc;
    for(int i = 0; i < n; i++){
        int z;
        scanf("%d",&z);
        vc.push_back(z);
    }
    sort(vc.begin(), vc.end());
    int sz = vc.size();
    for(int i = vc.size()-1; i > 0; i--){
        if(vc[i] > vc[i - 1] && vc[i] <= vc[i-1]+k){
            int temp = vc[i-1];
            while(i >= 0 && temp == vc[i - 1]) sz--, i--;
            i++;
        }
    }
    cout<<sz<<endl;

    return 0;
}
