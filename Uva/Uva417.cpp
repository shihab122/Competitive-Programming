#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int cnt = 0;
    map<string, int>mp;
    int o = 1, f = 1;
    for(int t = 0; t < 5; t++){
        for(int i = 0; i < 26 && t >= 0; i++){

            s = "";
            s += char(i + 97);
            for(int j = i + 1; j < 26 && t > 0; j++){
                s.push_back(char(j + 97));
                for(int k = j + 1; k < 26 && t > 1; k++){
                    s.push_back(char(k + 97));
                    for(int l = k + 1; l < 26 && t > 2; l++){
                        s.push_back(char(l + 97));
                        for(int m = l + 1; m < 26 && t > 3; m++){
                            s.push_back(char(m + 97));
                            if(mp[s] == 0) mp[s] = o++;
                            s.erase(s.begin()+4);
                        }
                        if(mp[s] == 0) mp[s] = o++;
                        s.erase(s.begin()+3);
                    }
                    if(mp[s] == 0) mp[s] = o++;
                    s.erase(s.begin()+2);
                }
                if(mp[s] == 0) mp[s] = o++;
                s.erase(s.begin()+1);
            }
            if(mp[s] == 0) mp[s] = o++;
            s.erase(s.begin()+0);

        }
    }
    string ss;
    while((cin>>ss))
        cout<<mp[ss]<<endl;


    return 0;
}
