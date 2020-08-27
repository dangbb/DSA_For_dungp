#include <bits/stdc++.h>
#define maxn 305

using namespace std;

int n, edge[maxn][maxn], min_dist[maxn][maxn][maxn];

int main()
{
    freopen("a.inp","r",stdin);

    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> edge[i][j];

            if(edge[i][j] == -1)
            {
                edge[i][j] = 1e9;
            }

            min_dist[0][i][j] = edge[i][j];
        }
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                min_dist[k][i][j] = min(min_dist[k-1][i][j], min_dist[k-1][i][k] + min_dist[k-1][k][j]);
            }
        }
    }
}
