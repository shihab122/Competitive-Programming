#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    int sz = a.size();

    int e , f = 1;

    while(f != e && sz >= 2){
        e = f;
        for(int i = 0; i < sz - 1; i++){
            if(a[i] == a[i + 1]){
                a.erase(i, 2);
                sz -= 2;
                if(f == 1)  f = 2;
                else f = 1;
            }
            if(f != e) break;
        }
    }
    if(f == 2) printf("Yes\n");
    else printf("No\n");

    return 0;
}
