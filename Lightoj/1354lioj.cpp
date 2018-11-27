#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int a, b, c, d;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        string s;
        cin>>s;
        int a1 = 0, b1 = 0, c1 = 0, d1 = 0, p = 0, cnt = 1;
        for(int i = s.size() - 1; i >= 0; i--){
            if(cnt == 1 && s[i] == '1') d1 += pow(2, p);
            if(cnt == 2 && s[i] == '1') c1 += pow(2, p);
            if(cnt == 3 && s[i] == '1') b1 += pow(2, p);
            if(cnt == 4 && s[i] == '1') a1 += pow(2, p);
            p++;
            if(s[i] == '.') p = 0, cnt++;
        }
//        cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<endl;
        if(a1 == a && b1 == b && c1 == c && d1 == d) printf("Case %d: Yes\n", tes);
        else printf("Case %d: No\n", tes);
    }

    return 0;
}
