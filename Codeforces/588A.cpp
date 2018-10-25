#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
        vector<int>arr,brr;
        int amount=0,price=99999;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            arr.push_back(a);
            brr.push_back(b);
        }
        for(int i=0;i<n;i++){
            price=min(price,brr[i]);
            amount+=price*arr[i];
        }
        cout<<amount<<endl;

    return 0;
}
