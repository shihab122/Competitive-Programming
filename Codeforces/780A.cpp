#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a,c;
    int arr[100000+10],mx=0;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<a.size();i++){
        if(arr[a[i]]==0){
            arr[a[i]]=1;
            mx++;
        }
        else{
            arr[a[i]]=0;
            c.push_back(mx);
            mx--;
        }
    }
    sort(c.begin(),c.end());
    cout<<c[c.size()-1]<<endl;;
    return 0;
}
