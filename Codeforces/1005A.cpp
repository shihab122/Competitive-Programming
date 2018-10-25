#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>vc;
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n -1; i++){
        if(arr[i] >= arr[i + 1]) vc.push_back(arr[i]);
    }
    vc.push_back(arr[n - 1]);
    printf("%d\n", vc.size());
    for(int i = 0; i < vc.size(); i++) printf("%d ", vc[i]);


    return 0;
}
