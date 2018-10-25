#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int X,Y;
    vector<int> v;
    cin>>X>>Y;
    if(X<Y){
        for(int i=X+1;i<Y;i++){
            if(i%5==2||i%5==3)
                v.push_back(i);
        }
    }
    else{
        for(int i=Y+1;i<X;i++){
            if(i%5==2||i%5==3)
                v.push_back(i);
        }

    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
