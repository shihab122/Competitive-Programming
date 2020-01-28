#include<bits/stdc++.h>

using namespace std;

int main(){
//    pair<int,int>a;
   vector<pair<int,int> >a;
    for(int i=0;i<5;i++){
        int c,d;
        cin>>c>>d;
        a.push_back({c,d});
/*        a.first=c;
        a.second=d;
        cout<<a.first<<" "<<a.second<<endl;
*/
    }
    for(int i=0;i<5;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

    return 0;
}
