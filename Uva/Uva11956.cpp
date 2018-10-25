#include<bits/stdc++.h>


using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    cin.ignore();
    for(int tes = 1; tes <= t; tes++){
        string s;
        getline(cin, s);
        int arr[100], sz = s.size(), j = 0;
        memset(arr, 0, sizeof(arr));
        sz = sz - 1;
        for(int i = 0; i <= sz; i++){
            if(s[i] == '>') j++;
            if(s[i] == '<') j--;
            if(s[i] == '+') arr[j]++;
            if(s[i] == '-') arr[j]--;
            if(j > 99) j = 0;
            if(j < 0) j = 99;
            if(arr[j] == 256) arr[j] = 0;
            if(arr[j] == -1) arr[j] = 255;

        }

        printf("Case %d:", tes);
        for(int i = 0; i < 100; i++) printf(" %02X", arr[i]);
        printf("\n");
    }


    return 0;
}
