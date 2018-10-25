#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<int>seq;
    seq.push_back(0);
    int a, n = 0;
    while(scanf("%d", &a)!= EOF){
        seq.push_back(a);
        n++;
    }

    int idx[n + 1], LIS[n + 1];
    for(int i = 1; i <= n; i++) idx[i] = INT_MAX;

    idx[0] = INT_MIN;
    int lislength = 0;

    for(int i = 1; i <= n; i++){
        int low = 0, high = lislength;
        while(low <= high){
            int mid = (low + high) / 2;
            if(idx[mid] < seq[i]) low = mid + 1;
            else high = mid - 1;
        }
        idx[low] = min(seq[i], idx[low]);
        LIS[i] = low;
        lislength = max(lislength, low);
    }

    printf("%d\n", lislength);
    printf("-\n");
    int temp = lislength;
    int sol[n + 1];
    while(n > 0){
        if(LIS[n] == temp)
            sol[temp--] = seq[n];

        n--;
    }

    for(int i = 1; i <= lislength; i++)
        printf("%d\n", sol[i]);

    return 0;
}

