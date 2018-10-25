#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A' && s[i+1] == 'B'&& s[i+2] == 'C'){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(s[i] == 'A' && s[i+1] == 'C'&& s[i+2] == 'B'){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(s[i] == 'B' && s[i+1] == 'A'&& s[i+2] == 'C'){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(s[i] == 'B' && s[i+1] == 'C'&& s[i+2] == 'A'){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(s[i] == 'C' && s[i+1] == 'B'&& s[i+2] == 'A'){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(s[i] == 'C' && s[i+1] == 'A'&& s[i+2] == 'B'){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;

    return 0;
}
