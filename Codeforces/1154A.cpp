#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int>vc(4);
    scanf("%d %d %d %d", &vc[0], &vc[1], &vc[2], &vc[3]);
    sort(vc.begin(), vc.end());
    printf("%d %d %d\n", vc[3] - vc[2], vc[3] - vc[1], vc[3] - vc[0]);

    return 0;
}
