#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int m, n;
        string str = "";
        scanf("%d %d", &m, &n);
        printf("Case %d:\n", tes);
        for(int i = 0; i < m; i++) str.push_back((char)(i+65));
        cout<<str<<endl;
        int cnt = 1;
        while(next_permutation(str.begin(),str.end())){
            if(cnt == n) break;
            printf("%s\n", str.c_str());
            cnt++;

        }
    }

    return 0;
}
