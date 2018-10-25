#include<bits/stdc++.h>

using namespace std;

struct node{
    string s;
    int val;
};

vector<string> vc;

int bfs(string start, string dest){

    map<string, bool> visit;
    queue<node> Q;
    int cnt = 0;
    node nd;
    nd.s = start;
    nd.val = cnt;
    Q.push(nd);

    while(!Q.empty()){

        nd = Q.front();
        string st = nd.s;
        cnt = nd.val;
        Q.pop();

        for(int i = 0; i < vc.size(); i++){
            if(visit[vc[i]] == false && vc[i].size() == st.size()){
                int dif = 0;
                for(int j = 0; j < st.size(); j++) if(vc[i][j] != st[j]) dif++;

                if(dif == 1){
                    nd.s = vc[i];
                    nd.val = cnt + 1;
                    Q.push(nd), visit[vc[i]] = true;
                }
                if(visit[dest] == true) return cnt+1;
            }
        }
    }

    return 0;
}



int main(){
    //freopen("in.txt","w", stdout);
    int t;
    scanf("%d", &t);
    while(t--){
        for(int i = 1;; i++){
            string s;
            cin>>s;
            if(s == "*") break;
            vc.push_back(s);
        }
        string line;
        cin.ignore();
        while(getline(cin, line) && line != ""){
            string start, dest;
            stringstream ss(line);
            ss >> start >> dest;
            cout<<start<<" "<<dest<<" "<<bfs(start, dest)<<endl;
        }
        vc.clear();
        if(t) printf("\n");
    }


    return 0;
}
