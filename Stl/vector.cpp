#include<iostream>
#include<vector>
#include<deque>
#include<set>  //include set/multiset
#include<list>
#include<map>
#include<iterator>
#include<algorithm>
#include<numeric> //numeric algorithm
#include<functional>

using namespace std;

int main(){
    vector<int>v; //v.size()=0


    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);  //v.size()=4,v={1,4,6,8}


    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;


    if(v.empty()) cout<<"Not Possible"<<endl;  //check vector empty or not


    cout<<v.size()<<endl; //print vector size


    vector<int> v2(v);  //copy constructor v2={1,4,6,8}


    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<endl;


    v2.swap(v); //v2 becomes empty and v has 4 items
    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<endl;
    cout<<v.size()<<" "<<v2.size()<<endl;


    v.clear(); //clear vector items
    cout<<v.size()<<endl;


    return 0;
}

