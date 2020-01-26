#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int s1 = sqrt((a * b) / c), s2 = sqrt((a * c) / b), s3 = sqrt((c * b) / a);
    a = 4 * (s1 + s2 + s3);
    printf("%d\n", a);

    return 0;
}
