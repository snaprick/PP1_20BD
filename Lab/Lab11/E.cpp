#include <bits/stdc++.h>

using namespace std;
string s;
set<char> s2;
set<char> s1;
map<char,int>m;
int n,a[111][111];
bool ok=false;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        for(int j=0;j<s.size();j++)
        {
            s1.insert(s[j]);
        }
        for(auto j:s1)
        {
            m[j]++;
        }
        s1.clear();
    }
    for(auto i : m)
    {
        if(i.second>=n)
        {
            cout << i.first << " ";
            ok = true;
        }
    }
    if(!ok)
    {
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
}