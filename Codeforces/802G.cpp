#include<bits/stdc++.h>

using namespace std;

bool isSubSequence(string str1,string str2, int m, int n)
{
    if (m == 0) return true;
    if (n == 0) return false;

    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);

    return isSubSequence(str1, str2, m, n-1);
}

int main()
{
    string a,s;
    a= "heidi";
    cin>>s;
    int m = a.size();
    int n = s.size();
    isSubSequence(a, s, m, n)? cout << "YES":
                                     cout << "NO";
    return 0;
}
