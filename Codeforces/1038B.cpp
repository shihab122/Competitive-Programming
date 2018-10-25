#include<bits/stdc++.h>
#define sc scanf
#define pr printf


using namespace std;
typedef long long ll;


int main(){
    int n;
    scanf("%d", &n);
    if(n <= 2) printf("No\n");
    else{
        printf("Yes\n");
        vector<int>odd, even;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0) even.push_back(i);
            else odd.push_back(i);
        }
        printf("%d ", even.size());
        for(int i = 0; i < even.size(); i++)
            printf("%d ", even[i]);
        printf("\n%d ", odd.size());
        for(int i = 0; i < odd.size(); i++)
            printf("%d ", odd[i]);
    }

    return 0;
}
