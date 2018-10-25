#include<bits/stdc++.h>
#define mx 205
#define INF 1000000
using namespace std;


typedef pair<int, int>PII;



vector<PII> V[mx];


struct Node{
    int u,cost;
    Node() {};
    Node(int _u, int _cost) {
        u = _u;
        cost = _cost;
    }
};


bool operator<(Node a,Node b){
    return a.cost < b.cost;
}


priority_queue<Node>PQ;


int cost[mx];

int taken[mx];

map<string, int> mp;

int prim(int n,int s, int dest){

    for(int i = 1; i <= n; i++)
        cost[i] = INF, taken[i] = 0;

    cost[s] = 0;
    PQ.push(Node(s,0));
    int ans = INF;

    while(!PQ.empty()){

        Node x  = PQ.top();
        PQ.pop();
        if(taken[x.u]) continue;
        if(taken[dest]) break;

        taken[x.u] = 1;
        cout<<x.cost<<endl;
        if(x.cost > 0) ans = min(x.cost, ans);

        for(int i = 0; i < V[x.u].size(); i++){
            PII v = V[x.u][i];
            if(taken[v.first]) continue;

            if(v.second < cost[v.first]){
                PQ.push(Node(v.first, v.second));
                cost[v.first] = v.second;
            }
        }
    }
    return ans;
}


int main(){
    //freopen("in.txt","w", stdout);
    int n, e, index = 0,tes = 1;

    while(scanf("%d %d", &n, &e)){
        if(n == 0 && e == 0) break;

        for(int i = 0; i < e; i++){

            int w;
            string u, v;
            cin>>u>>v;
            scanf("%d",&w);

            if(mp[u] == 0) mp[u] = ++index;
            if(mp[v] == 0) mp[v] = ++index;

            V[mp[u]].push_back(make_pair(mp[v], w));
            V[mp[v]].push_back(make_pair(mp[u], w));
        }

        string source, desti;
        cin>>source>>desti;

        int ans2  = prim(n, mp[source], mp[desti]);

        printf("Scenario #%d\n", tes++);
        printf("%d tons\n", ans2);
        cout<<endl;
        //mp.clear();
    }

    return 0;
}

19 48
Bordj Puerto 98
Bordj Memphis 67
Memphis Mazari 79
Bordj Portland 20
Mazari Banja 22
Banja Pittsburgh 76
Memphis Batangas 35
Bordj Mawlamyaing 12
Mazari Murfreesboro 92
Bordj Miami 45
Puerto Pematang 20
Mawlamyaing Manchester 96
Murfreesboro Palma 7
Portland Palmdale 95
Banja Mobile 88
Palma Bat 55
Murfreesboro Mogilev 16
Murfreesboro Praia 100
Bordj Puerto 75
Puerto Memphis 35
Puerto Mazari 4
Memphis Portland 48
Mazari Banja 98
Bordj Pittsburgh 47
Pittsburgh Batangas 67
Puerto Mawlamyaing 2
Batangas Murfreesboro 87
Mazari Miami 34
Pittsburgh Pematang 4
Memphis Manchester 6
Pematang Palma 77
Memphis Palmdale 80
Palma Mobile 85
Miami Bat 38
Batangas Mogilev 50
Manchester Praia 58
Bordj Puerto 86
Bordj Memphis 91
Puerto Mazari 16
Puerto Portland 23
Bordj Banja 79
Mazari Pittsburgh 71
Portland Batangas 76
Memphis Mawlamyaing 11
Mazari Murfreesboro 35
Puerto Miami 22
Banja Pematang 80
Batangas Manchester 4
Batangas Pematang


