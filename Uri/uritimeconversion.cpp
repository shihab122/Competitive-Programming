#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int x=N/3600;
    N=N%3600;
    int y=N/60;
    cout<<x<<":"<<y<<":"<<N%60<<endl;
    return 0;
}
