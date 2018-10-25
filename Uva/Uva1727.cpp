#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int>M;
    M["JAN"]=31;
    M["FEB"]=28;
    M["MAR"]=31;
    M["APR"]=30;
    M["MAY"]=31;
    M["JUN"]=30;
    M["JUL"]=31;
    M["AUG"]=31;
    M["SEP"]=30;
    M["OCT"]=31;
    M["NOV"]=30;
    M["DEC"]=31;
    string ar[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int t;
    cin>>t;
    while(t--){
        string a,b,r;
        cin>>a>>b;
        int f=0,c=0,u=0,v=0,w=0;
        for(int i=0;i<7;i++){
            if(ar[i]==b&&f==0) f=1;
            if(f==1) c++;
            if(ar[i]=="FRI"&&f==1){
                u=1;
                break;
            }
            if(ar[i]=="SAT"&&f==1){
                v=1;
                w++;
                c+=6;
                break;
            }
        }
            for(int i=c;i<=M[a];i+=7){
                w++;
                if((i+1)<=M[a]) w++;
            }
            cout<<w<<endl;
           // q.push_back(w);
        }
    return 0;
}
