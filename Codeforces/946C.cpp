#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    int flag=0,cnt=0,pq=0;
    string ans="";
    string tle="abcdefghijklmnopqrstuvwxyz";
    //cout<<ex.size()<<endl;
    for(int i=0;i<tle.size();i++){
        flag=0;
        for(int j=pq;j<a.size();j++){

            if(a[j]<=tle[i]){
                ans+=tle[i];
                cnt++;
                pq=j+1;
                flag=1;
            }
            else{
               // cout<<ans<<endl;
                ans+=a[j];
            }
            if(flag==1) break;
            //if(a.size()==0) break;

        }
            if(cnt==26){
                ans+=a.substr(pq,a.size()-1);
                break;
            }
            else if(flag==0){
                break;
            }
    }
    if(cnt<26) cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}

