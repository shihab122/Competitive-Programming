#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int N;
    cin>>N;
    cout<<fixed<<setprecision(1);
    while(N--){
        float a,b,c;
        cin>>a>>b>>c;
        cout<<(a*2+b*3+c*5)/10<<endl;
    }
    return 0;
}
