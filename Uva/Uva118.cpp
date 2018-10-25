#include<bits/stdc++.h>

using namespace std;

char dir[] = {'N', 'E', 'S', 'W'};

int x[] = {0, 1, 0, -1};
int y[] = {1, 0, -1, 0};

int main(){
    int n, m;
    map<char, int>mp;
    for(int i = 0; i < 4; i++)
        mp[dir[i]] = i;

    scanf("%d %d", &n, &m);
    int u, v;
    char ch;
    bool scent[n + 10][m + 10];
    memset(scent, false, sizeof(scent));
    while(scanf("%d %d %c", &u, &v, &ch) != EOF){
        string s;
        cin>>s;
        int c = mp[ch], f = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R') c = (c + 1) % 4;
            else if(s[i] == 'L'){
                c = (c + 3) % 4;
            }
            else if(f != 0){
                if((u + x[c]) < 0 || (u + x[c]) > n || (v + y[c]) < 0 || (v + y[c]) > m){
                    if(scent[v][u] == false){
                        scent[v][u] = true;
                        f = 0;
                        break;
                    }
                }
                else u += x[c], v += y[c];
            }

        }

        if(f == 0) printf("%d %d %c LOST\n", u, v, dir[c]);
        else printf("%d %d %c\n", u, v, dir[c]);
    }

    return 0;
}
