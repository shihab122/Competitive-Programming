#include<bits/stdc++.h>

using namespace std;
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    string a;
    cin>>a;
    sort(a.begin(), a.end());
    int sz = a.size() - y;
    int s = a.size(), mn = 100000000;

    for(int i = 0; i <= sz; i++){
        int an = a[i] - 96;
        int last = a[i] - 96, c = 1;
        for(int j = i + 1; j < s; j++){
            if(c == y) break;
            int lol = a[j] - 96;
            if((last+1) != lol && last != lol){
                last = lol;
                an += lol;
                c++;
            }
        }

        if(c == y) mn = min(mn, an);
    }

    if(mn != 100000000) printf("%d\n", mn);
    else printf("-1\n");

    return 0;
}
