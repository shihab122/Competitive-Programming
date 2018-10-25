#include<bits/stdc++.h>
#define ll long long
#define ii pair<long long,long long>
#define vec vector<long long>
#define memo(a,b) memset(a,b,sizeof(a))
#define Pb push_back
#define F first
#define S second

using namespace std;

int main(){
    string str;
    map<char,int>mp;
    cin>>str;
    char ch='a';
    for(int i=0;i<str.size();i++){
        int num=str[i]-ch;
        if(num==0) mp[str[i]]++;
        else if(num==1&&i!=0){
            mp[str[i]]++;
            ch=str[i];
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    if(mp['a']==0||mp['b']==0||mp['c']==0){
        printf("NO\n");
        return 0;
    }
    if(mp['c']==mp['a']||mp['c']==mp['b']) printf("YES\n");
    else printf("NO\n");

    return 0;
}
