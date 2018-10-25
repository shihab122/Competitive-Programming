#include<bits/stdc++.h>

using namespace std;

class TestTaking{
public:
    int findMax(int n,int g,int a){
        int ans=min(g,a)+min(n-g,n-a);
        return ans;
    }

};

