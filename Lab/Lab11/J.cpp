#include <bits/stdc++.h>

using namespace std;
double dist(int x,int y, int x1, int y1)
{
    return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
}
multimap<double,pair<int,int>> m;
int main()
{
    int n,x1,y1,x,y;
    cin >> x1 >> y1;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x >> y;
        double ans = dist(x,y,x1,y1);
        m.insert(pair<double,pair<int,int>>(ans,make_pair(x,y)));
    }
    for(auto i : m)
    {
        cout << i.second.first << " " << i.second.second << "\n"; //<< i.first <<  endl;
    }
}