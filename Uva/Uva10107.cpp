#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,i=0;
    vector<int>b;
    b.push_back(0);
 //   cout<<b[0]<<endl;
    while(cin>>a){
        i++;
        b.push_back(a);
        sort(b.begin(),b.end());
        if(i%2==0){
            int mid=(i+1)/2;
            int val=(b[mid]+b[mid+1])/2;
            //cout<<b[i]<<" yes"<<b[2]<<endl;
            cout<<val<<endl;

        }
        else{
            int mid=(i+1)/2;
            cout<<b[mid]<<endl;
        }

    }

    return 0;
}
