#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<(n - 1) / 2<<endl;
    return 0;
}

/*int main(){
    int n, m, r, ans = 0, ans2= 0;
    scanf("%d", &n);
    if(n == 2 || n == 1){
        printf("0\n");
        return 0;
    }
    int i = 2, j = n - 1;
    for(int k = 0;;k++){

        if(i > j) break;
        ans += (j + 1 + i) % (n + 1);
        i++, j--;
    }
    printf("%d\n", ans);

    return 0;
}
*/
