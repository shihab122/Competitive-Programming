#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int>vc;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        vc.push_back(x);
    }
    int s = 0, e = vc.size() - 1;
    long long ss = vc[s], ee = vc[e], mx = 0;
    while(1){
        //cout<<s<<" "<<e<<endl;
        if(s == e || s > e) break;
        if(ss == ee){
            mx = max(mx, ss), s++, e--;
            ss += vc[s];
            ee += vc[e];
        }
        else if(ss > ee){
            e--;
            ee += vc[e];
        }
        else{
            s++;
            ss += vc[s];
        }
    }
    printf("%lld\n", mx);
    return 0;
}
