#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    vector<string>vc1;
    map<string,int>mp,mp1,mp2,mp3;

    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        mp[str]++;
        vc1.push_back(str);
        reverse(str.begin(),str.end());
        mp2[str]++;
    }
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        mp1[str]++;
        mp[str]++;
        mp2[str]++;
        mp3[str]++;
    }
     for(int i=0;i<n;i++){
        string s1,s2;
        for(int j=n-1;j>=0;j--){
            s1.push_back(vc1[j][i]);
        }
        mp1[s1]++;
        reverse(s1.begin(),s1.end());
        mp3[s1]++;
    }
    map<string,int>:: iterator it;
    int flag=0;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second%2!=0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Yes\n");
        return 0;
    }
    flag=0;
    for(it=mp1.begin();it!=mp1.end();it++){
        if(it->second%2!=0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("Yes\n");
        return 0;
    }
    flag=0;
    for(it=mp2.begin();it!=mp2.end();it++){
        if(it->second%2!=0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("Yes\n");
        return 0;
    }
    flag=0;
    for(it=mp3.begin();it!=mp3.end();it++){
        if(it->second%2!=0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("Yes\n");
    }
    else printf("No\n");

    return 0;
}
