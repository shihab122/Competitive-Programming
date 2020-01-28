#include<bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;

bool cmp(iii a,iii b){
    if(a.second!=b.second) return a.second < b.second;
    else{
        ii c=a.first;
        ii d=b.first;
        if(c.second != d.second) return c.second < d.second;
        else return c.first < d.first;
    }

}

int main(){
    iii A=make_pair(ii(2,21),1982);
    iii B=make_pair(ii(6,21),1981);
    iii C=make_pair(ii(1,21),1984);
    vector<iii>birthdays;
    birthdays.push_back(A),birthdays.push_back(B),birthdays.push_back(C);
    sort(birthdays.begin(),birthdays.end(),cmp);
    for(int i=0;i<birthdays.size();i++){
        ii a =birthdays[i].first;
        cout<<a.first<<" - "<<a.second<<" - "<<birthdays[i].second<<endl;
    }
    return 0;
}
