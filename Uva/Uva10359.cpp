#include<bits/stdc++.h>


using namespace std;

vector<string>dp;
string multi, sum, z;
int carry, a, b, c, sz, s1, s2, n;

string multiply(string x){
    sz = x.size();
    multi = "";
    z = "";
    carry = 0, a = 0;
    for(int i = sz -1; i >= 0; i--){
        a = x[i] - '0';
        a *= 2;
        c = a + carry;
        z.push_back((c % 10) + '0');
        multi = z + multi;
        carry = c / 10;
        z.clear();
    }

    if(carry > 0){
        z.push_back(carry + '0');
        multi  = z + multi;
    }

    return multi;
}

string add(string x, string y){
    s1 = x.size(), s2 = y.size();

    string sum = "";
    string z;
    int j = s2 - 1, carry = 0;
    for(int i = s1 - 1; i >= 0; i--){
        a = 0, b = 0;
        if(j >= 0) b = y[j] - '0', j--;
        a = x[i] - '0';
        c = a + b + carry;
        z.push_back((c % 10) + '0');
        sum = z + sum;
        carry = c / 10;
        z.clear();
    }
    if(carry > 0){
        z.push_back(carry + '0');
        sum  = z + sum;
    }
    return sum;
}

string ways(int n){
    if(dp[n] != "-1") return dp[n];
    else{
        string a = ways(n - 1);
        string b = ways(n - 2);
        b = multiply(b);
        a = add(a, b);
        return dp[n] = a;
    }
}


int main(){
    for(int i = 0; i <= 250; i++)
        dp.push_back("-1");

    dp[0] = "1";
    dp[1] = "1";
    while(cin>>n){
        cout<<ways(n)<<endl;
    }

    return 0;
}
