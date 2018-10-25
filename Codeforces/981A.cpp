#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin>>a;
    b = a;
    for(int i = 0; i < a.size(); i++){
        reverse(a.begin(), a.end());
        if(a != b){
            printf("%d\n",a.size());
            return 0;
        }
        b = b.substr(0, b.size()-1);
        a = b;
        //cout<<a<<" "<<b<<endl;

    }

    printf("0\n");

    return 0;
}
