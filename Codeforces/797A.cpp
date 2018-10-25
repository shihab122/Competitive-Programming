#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b="VK";
    cin>>a;
    long long sum=0,l=0;
    if(a.size()>1){
        for(int i=0;i<a.size();i++){
            if(a[i]=='V'&&a[i+1]=='K'){
                sum++,a[i]='l',a[i+1]='l',i+=1;

            }
        }
        for(int i=0;i<a.size();i++){
            if((i+1)<a.size()){
                if(l==0&&a[i]==a[i+1]&&a[i]!='l'){
                    sum++;
                    l=1;
                    break;
            }
            }
        }
        cout<<sum<<endl;
    }
    else
        cout<<0<<endl;
    return 0;
}
