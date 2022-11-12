#include<iostream>
#include<stdlib.h>
#define MX 105
using namespace std;

struct point{
    int x, y;
}adj[MX];

int distance(point a, point b)
{
    int tmp = abs(a.x-b.x) + abs(a.y-b.y);
    return tmp;
}

int totalDistance(int n)
{
    int sum = 0;
    for(int i=1; i<n; i++)
        sum += distance(adj[i], adj[i-1]);
    return sum;
}

void permutation(int l, int r, point s, point h, int &ans)
{
    if(l==r)
    {
        int tmp = distance(s, adj[0]) + totalDistance(r+1) + distance(h, adj[r]);
        //cout<<ans<<endl;
        ans = min(ans, tmp);
        return;
    }

    for(int i=l; i<=r; i++)
    {
        swap(adj[l], adj[i]);
        permutation(l+1, r, s, h, ans);
        swap(adj[l], adj[i]);
    }
}

int main()
{
    int t = 10, cas = 0;
    while (t--)
    {
        int q, a, b;
        cin >> q;

        point s, h;
        cin >> s.x >> s.y >> h.x >> h.y;

        for (int i = 0; i < q; i++)
        {
            cin >> a >> b;
            adj[i].x = a;
            adj[i].y = b;
        }

        int ans = distance(s, adj[0]) + totalDistance(q) + distance(h, adj[q - 1]);
        //cout<<ans<<endl;
        permutation(0, q-1, s, h, ans);
        cout <<"# "<< ++cas << " "<<ans << endl;
    }
    return 0;
}
