#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    vector<long long>A, B;
    long long aa = 0, bb = 0;
    for(int i = 0; i < n; i++){
        long long x;
        scanf("%lld", &x);
        A.push_back(x);
    }
    for(int i = 0; i < n; i++){
        long long x;
        scanf("%lld", &x);
        B.push_back(x);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int f = 0;
    int a = n - 1, b = n - 1;
    while(1){
        if(a < 0 && b < 0) break;
        if(f == 0){
            if(a >= 0 && b >= 0 && A[a] < B[b]) b--;
            else if(a >= 0) aa += A[a], a--;
            else b--;
            f = 1;
        }
        else{
            if(a >= 0 && b >= 0 && A[a] > B[b]) a--;
            else if(b >= 0) bb += B[b], b--;
            else a--;
            f = 0;
        }


    }
    aa = aa - bb;
    printf("%lld\n", aa);

    return 0;
}
