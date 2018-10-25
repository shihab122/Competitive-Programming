#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mx=0,c=0;
    scanf("%d",&n);
    string a;
    cin>>a;
    char v;
    map<char,int>mymap;
    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&&a[i]<='Z'){
            mx=max(mx,c);
            c=0;
            mymap.clear();
        }
        else if(mymap[a[i]]==0){
            mymap[a[i]]=1;
            c++;
        }
        else if(v==a[i]) continue;
    }
        printf("%d\n",max(mx,c));
    return 0;

}
