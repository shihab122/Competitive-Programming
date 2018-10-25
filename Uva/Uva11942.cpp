#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    printf("Lumberjacks:\n");
    while(t--){
        int arr[10], ans[10];
        for(int i = 0; i < 10; i++) scanf("%d", &arr[i]), ans[i] = arr[i];

        sort(ans, ans+10);
        int x = 0, y = 0, j = 9;
        for(int i = 0; i < 10; i++){
            if(ans[i] == arr[i]) x++;
            if(ans[i] == arr[j]) y++;
            j--;
        }
        if(x == 10 || y == 10) printf("Ordered\n");
        else printf("Unordered\n");
    }

    return 0;
}
