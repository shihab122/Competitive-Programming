#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int>st;
    int a;
    for(int i = 0; i < 4; i++){
        scanf("%d", &a);
        st.insert(a);
    }
    int ans = 4 - st.size();
    printf("%d\n", ans);

    return 0;
}
