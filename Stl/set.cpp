//Already sorted no need to sort
#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int>a;
    a.insert(1);
    a.insert(1);
    a.insert(7);
    a.insert(8);
    a.insert(1);
    a.insert(9);
    a.insert(3);
    set<int>::iterator it;
   // sort(a.begin(),a.end());
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<endl;
    return 0;
}
