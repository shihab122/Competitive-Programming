#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,i,j;
    cin>>a>>b;
    for(i=1;;i++){
        j=i;
        if(i%2==0&&b>=j){
            b-=j;
            if(a<(++j)){
                cout<<"Vladik"<<endl;
                return 0;
            }
        }
        else if(a>=j){
            a-=j;
            if(b<(++j)){
                cout<<"Valera"<<endl;
                return 0;
            }
        }
    }
    return 0;
}
