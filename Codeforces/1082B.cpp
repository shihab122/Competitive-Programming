#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    scanf("%d", &n);
    int arr[n + 1];
    memset(arr, 0, sizeof(arr));
    cin>>s;
    int mx = 1, sz = s.size();
    if(s[0] == 'G') arr[0] = 1;
    for(int i = 1; i < sz; i++){
        if(s[i] == 'G') arr[i] += arr[i - 1] + 1;
        mx = max(arr[i], mx);
    }
    int f = 0, p, mi = 0;
    if(mx > 0){
        for(int i = 0; i < n && i >= 0; i++){
            if(arr[i] == 0){
                int temp = i;
                if(i == 0) p = 0;
                else p = arr[i - 1];
                i++, f = 0;
                while(i < sz){
                    if(f > 0 && arr[i] == 1){
                        f = 2;
                        break;
                    }
                    if(arr[i] > 0 ) p++;
                    i++;
                    f = 1;
                }
                if(f == 2 || mi > 0) p++;
                if(i < sz) i -= 2;
                mx = max(mx, p);
                mi = temp;
            }

        }
    }
    printf("%d\n", mx);

    return 0;
}
