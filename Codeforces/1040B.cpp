#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    if(k == 0){
        printf("%d\n", n);
        for(int i = 1; i <= n; i++)
            printf("%d ", i);
        return 0;
    }
    int s = (2 * k) + 1;
    int x = n / s;
    if(n % s != 0) x++;
    printf("%d\n", x);
    for(int i = 1; i <= (k + 1); i++){
        int j = i;
        int temp = x;
        vector<int>vc;
        while(temp > 0){
            vc.push_back(min(j, n));
            j += (2 * k) + 1;
            temp--;
        }
        j -= (k + 1);
        if(temp == 0 && j >= n){
            for(int l = 0; l < vc.size(); l++)
                printf("%d ", vc[l]);
            return 0;
        }
        vc.clear();
    }


    return 0;
}
