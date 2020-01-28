#include<bits/stdc++.h>

using namespace std;

int main(){
    int no_ofcoin;
    cin>>no_ofcoin;
    int coin[no_ofcoin];
    for(int i=0;i<no_ofcoin;i++) cin>>coin[i];
    int amount;
    cin>>amount;
    int taka[amount+1];
    memset(taka,INT_MAX,sizeof(taka));
    taka[0]=0;
    for(int i=0;i<no_ofcoin;i++){
        for(int j=1;j<=amount;j++){
            if(j<coin[i]) continue;
            int x=j-coin[i];
            taka[j]=min(taka[j],x+1);

        }
    }
    cout<<taka[amount]<<endl;
    return 0;
}
