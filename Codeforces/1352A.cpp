#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        string s;
        cin>>s;
        vector<int> vc;
        int sz = s.size() - 1;

        for (int i = 0; i < s.size(); i++) {
            if(s[i] > '0') vc.push_back((s[i] - '0') * pow(10, sz));
            sz--;
        }
        printf("%d\n", vc.size());
        for(int i = 0; i < vc.size(); i++) printf("%d ", vc[i]);
        cout<<endl;
    }

    return 0;
}
