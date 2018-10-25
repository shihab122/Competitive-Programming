#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    scanf("%d", &a);
    while(1){
        a++;
        map<int, int> mp;
        int c = a, flag = 0;
        while(c > 0){
            if(mp[c % 10] == 1){
                flag = 1;
                break;
            }
            mp[c % 10] = 1;
            c /= 10;
        }
        if(flag == 0) break;
    }

    printf("%d\n", a);



    return 0;
}
