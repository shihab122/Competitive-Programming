#include<bits/stdc++.h>
using namespace std;

int main(){
    float sum=0,a;
    int i=0;
    cout<<fixed<<setprecision(2);
    while(i!=2){
        cin>>a;
        if(a>=0&&a<=10){
            sum=sum+a;
            i++;
        }
        else
            cout<<"nota invalida"<<endl;
    }
    cout<<"media = "<<sum/2<<endl;
    return 0;
}
