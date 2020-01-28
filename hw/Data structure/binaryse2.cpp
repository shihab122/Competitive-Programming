#include<bits/stdc++.h>

using namespace std;


int main(){
    list<int>mylist;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mylist.push_back(x);
    }
    mylist.sort();

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        list<int>::iterator it,ita;
        it=lower_bound(mylist.begin(),mylist.end(),num);
        cout<<it-mylist.end();
        mylist.insert(it,num);
        for(ita=mylist.begin();ita!=mylist.end();ita++)
            cout<<*ita<<" ";
        mylist.erase(it);
        cout<<endl;
    }

    return 0;
}
