#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a=0;
    cin>>n;
    while(n--){
        string b;
        cin>>b;
        if(b=="Tetrahedron")
            a+=4;
        else if(b=="Cube")
            a+=6;
        else if(b=="Octahedron")
            a+=8;
        else if(b=="Dodecahedron")
            a+=12;
        else if(b=="Icosahedron")
            a+=20;
    }
    cout<<a<<endl;
    return 0;
}
