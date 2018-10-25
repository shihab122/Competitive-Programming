#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    int ans = -1;
    char last = a[a.size()-1];
    for(int i=0;i<a.size()-1;i++){
        if(a[i]%2 == 0){
            if(a[i] < last){
                swap(a[i],a[a.size()-1]);
                cout<<a<<endl;
                return 0;
            }
            ans = i;
        }
    }
    if(ans == -1) printf("-1\n");
    else{
        swap(a[a.size()-1],a[ans]);
        cout<<a<<endl;
    }
    return 0;
}
