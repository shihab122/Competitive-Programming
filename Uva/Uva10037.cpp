#include<bits/stdc++.h>
#define mp make_pair
using namespace std;


int main(){
    vector<pair<int,int> > vc;
    int t;
    scanf("%d", &t);
   // freopen("in.txt", "w", stdout);
    while(t--){
        int n;
        stringstream ss;
        scanf("%d", &n);
        int arr[n + 1];
        for(int i = 1; i <= n; i++)
            scanf("%d", &arr[i]);

        sort(arr+1, arr+n+1);
        int ans = 0;
        int A = arr[1], B = arr[2];
        pair<int,int> a;
        a.first = A;
        a.second = B;
       // vc.push_back(a);
        while(n >= 4){
            int x = (2 * A) + arr[n] + arr[n - 1];
            int y = (2 * B) + A + arr[n];
            if(x <= y){
                ans += x;
                vc.push_back(mp(A, arr[n - 1]));
                vc.push_back(mp(A, -1));
                vc.push_back(mp(A, arr[n]));
                vc.push_back(mp(A, -1));
            }
            else{
                ans += y;
                vc.push_back(a);
                vc.push_back(mp(A, -1));
                vc.push_back(mp(arr[n - 1], arr[n]));
                vc.push_back(mp(B, -1));
            }
            n -= 2;
        }
        if(n == 3){
            ans += A + B + arr[3];
            vc.push_back(mp(A, arr[3]));
            vc.push_back(mp(A, -1));
            vc.push_back(a);
        }
        else if(n == 2){
            //vc.push_back(mp(A, -1));
            vc.push_back(a);
            ans += B;
        }
        else{
            vc.push_back(mp(A, -1));
            ans += A;
        }

        printf("%d\n", ans);
        for(int i = 0; i < vc.size(); i++){
            if(vc[i].second == -1) printf("%d\n", vc[i].first);
            else  printf("%d %d\n", vc[i].first, vc[i].second);
        }
        vc.clear();
        if(t) cout<<endl;

    }


    return 0;
}
