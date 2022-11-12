#include <iostream>
#include<stdlib.h>
#define MX 25
using namespace std;

struct point {
    int x, y;
}adj[MX];

int distance(point a, point b)
{
    return abs(a.x - b.x) + abs(a.y - b.y);
}

void Swap(point &a, point &b)
{
    point t = a;
    a = b;
    b = t;
}

int totalDistance(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += distance(adj[i - 1], adj[i]);
    }
    return sum;
}

void permutation(point adj[], int l, int r, point s, point h, int &ans)
{
    if (l == r)
    {
        int tmp = distance(s, adj[0]) + totalDistance(r+1) + distance(h, adj[r]);
        //cout<<tmp<<endl;
        ans = min(ans, tmp);
        return;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            Swap(adj[l], adj[i]);
            permutation(adj, l + 1, r, s, h, ans);
            Swap(adj[l], adj[i]);
        }
    }
}

int main()
{
    //freopen("input.txt","r", stdin);
    int t;
    cin >> t;

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
        permutation(adj, 0, q-1, s, h, ans);
        cout <<"The shortest path has length "<< ans << endl;
    }
    return 0;
}
