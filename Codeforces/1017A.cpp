#include<bits/stdc++.h>


using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    int a, b, c, d, lol;
    vector<int> vc;
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int sum = a + b + c + d;
        if(i != 1)vc.push_back(sum);
        else lol = sum;
    }
    if(n == 1){
        printf("1\n");
        return 0;
    }
    sort(vc.rbegin(), vc.rend());
    for(int i = 0; i < vc.size(); i++){
        if(vc[i] <= lol){
            printf("%d\n", i+1);
            return 0;
        }
    }
    printf("%d", n);

    return 0;
}
