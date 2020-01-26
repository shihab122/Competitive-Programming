#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    scanf("%d", &k);

    vector<int>arr(12);
    for(int i = 0; i < 12; i++) scanf("%d", &arr[i]);
    sort(arr.rbegin(), arr.rend());

    int sum = 0, cnt = 0;
    while(sum < k && cnt < 12){
        sum += arr[cnt];
        cnt++;
    }

    if(sum < k) cnt = -1;

    printf("%d\n", cnt);

    return 0;
}
