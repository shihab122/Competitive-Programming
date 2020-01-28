#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<int>deq;

    deq.push_back(1);
    deq.push_back(4);
    deq.push_back(5);
    deq.push_back(6);
    deq.push_back(7);

    vector<int>::iterator it;

    for(int i=0;i<deq.size();i++)
        cout<<deq[i]<<" ";
    cout<<endl;


    deq.push_front(0);
    deq.push_back(8);
    for(int i=0;i<deq.size();i++)
        cout<<deq[i]<<" ";
    cout<<endl;
    return 0;
}
