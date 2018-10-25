#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>a;
    int sum=0,b;
    for(int i=0;i<6;i++){
        cin>>b;
        sum+=b;
        a.push_back(b);

    }
    if((sum%2)!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    sum/=2;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                int c=a[i]+a[j]+a[k];
                if(c==sum){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
