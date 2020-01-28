#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    //freopen("in.txt", "r", stdin);
    while(getline(cin, s)){
        int sum = 0;
        if(s.size() == 0) cout<<endl;
        else {
            for(int i = 0; i < s.size(); i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    sum += s[i] - '0';
                }
                else if(s[i] == '!') cout<<endl;
                else if(s[i] == 'b'){
                    for(int j = 0; j < sum; j++)
                        cout<<" ";
                    sum = 0;
                }
                else{
                    for(int j = 0; j < sum; j++)
                        cout<<s[i];
                    sum = 0;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
