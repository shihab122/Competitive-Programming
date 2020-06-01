#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int x = 0, y = 0;
    if(m > 1) x = (n * (m / 2)) + ((m % 2) * (n / 2));
    if(n > 1) y = (m * (n / 2)) + ((n % 2) * (m / 2));
    printf("%d\n", max(x, y));

    return 0;
}
