//first insert and remove at any place O(1)
//faster than vector/deque
//slow search O(n)
#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>mylist,mylist2;
    mylist.push_back(1);
    mylist.push_back(4);
    mylist.push_back(6);
    mylist.push_back(8);
    mylist.push_back(10);
    mylist.push_back(12);
    mylist.push_front(0);

    //find the address of the element
    list<int>::iterator it,it_a,it_b;
    it=find(mylist.begin(),mylist.end(),4);

    //insert before this element
    mylist.insert(it,3);
    it=find(mylist.begin(),mylist.end(),3);


    mylist.insert(it,2);
    it=find(mylist.begin(),mylist.end(),6);


    mylist.insert(it,5);
    it=find(mylist.begin(),mylist.end(),8);


    mylist.insert(it,7);
    it=find(mylist.begin(),mylist.end(),10);

    it_a=find(mylist.begin(),mylist.end(),2);
    mylist.insert(it,9);
    it=find(mylist.begin(),mylist.end(),12);


    //erase 12 in the list
    mylist.insert(it,11);
    mylist.erase(it);


    //for(it=mylist.begin();it!=mylist.end();it++)
      //  cout<<*it<<endl;

    mylist.splice(it,mylist2,it_a,mylist.end());
    for(it=mylist2.begin();it!=mylist2.end();it++)
        cout<<*it<<endl;
    return 0;
}
