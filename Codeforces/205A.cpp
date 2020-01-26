#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

bool cmp(pii a, pii b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}


int main(){
    int n;
    scanf("%d", &n);
    pii arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i].first);
        arr[i].second = i + 1;
    }
    sort(arr, arr+n, cmp);
    if(arr[0].first == arr[1].first) printf("Still Rozdil\n");
    else printf("%d\n", arr[0].second);

    return 0;
}
