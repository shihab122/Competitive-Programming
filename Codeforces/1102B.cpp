#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int arr[5005];
map<pair<int,int>, int> mp;

int main(){
    int n, k, mx = 0;
    scanf("%d %d", &n, &k);
    int input[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &input[i]);
        arr[input[i]]++;
        mx = max(arr[input[i]], mx);
    }

    if(mx > k) printf("NO\n");
    else{
        printf("YES\n");
        int l = k, flag = 0, x = 1;
        pair<int,int> pi;
        for(int i = 0; i < n; i++){
            if(flag == 0){
                pi.first = input[i];
                pi.second = x;
                printf("%d ", x);
                mp[pi] = 1;
                x++;
            }
            else{
                for(int j = 1; j <= k; j++){
                    pi.first = input[i];
                    pi.second = j;
                    if(mp[pi] == 0){
                        printf("%d ", j);
                        mp[pi] = 1;
                        break;
                    }
                }
            }
            if(x > k) flag = 1;
        }
    }


    return 0;
}

