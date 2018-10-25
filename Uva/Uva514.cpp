#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, f = 0;
    while(scanf("%d", &n)){
        if(n == 0) break;
        int arr[n];
        while(true){
            scanf("%d", &arr[0]);
            if(arr[0] == 0) break;
            for(int i = 1; i < n; i++) scanf("%d", &arr[i]);

            stack<int>st;
            int index = 0;
            for(int i = 1; i <= n; i++){
                st.push(i);
                while(index < n && !st.empty() && st.top() == arr[index]){
                    index++;
                    st.pop();
                }
            }
            if(st.empty()) printf("Yes\n");
            else printf("No\n");
        }
        cout<<endl;
    }


    return 0;
}
