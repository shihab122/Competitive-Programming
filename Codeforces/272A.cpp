#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]), sum += arr[i];
    n++;
    int j = 1, ans = 0;
    while(j <= 5){
        //cout<<(sum+j)%n<<endl;
        if((sum + j) % n != 1){
            ans++;
        }
        j++;
    }
    cout<<ans<<endl;


    return 0;
}
