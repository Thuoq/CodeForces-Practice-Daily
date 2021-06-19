#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

vector<vector<int>> dist;
vector<vector<int>> path;

void createGraph()
{
    dist.resize(n);
    path.resize(n);
    for (int i = 0; i < n; i++)
    {
        dist[i].resize(n);
        path[i].resize(n);

        for (int j = 0; i < n; j++)
        {
            cin >> dist[i][j];
            if (dist[i][j] = -1)
                dist[i][j] = INF;
            if (dist[i][j] != INF && i != j)
                path[i][j] = i else path[i][j] = -1;
        }
    }
}

void Floyd_Warshall()
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j] = path[k][j];
                }
            }
        }
    }
}


void findPath(int i, int j)
{
    stack<int> st;
    st.push(j);
    while (j != i)
    {
        j = path[i][j];
        st.push(j);
    }
    for (int u = 0; u < st.size(); i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
void display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] != INF)
            {
                cout << "Minimum dist between " << i << " - " << j << " : " << dist[i][j] << endl;
                findPath(i, j);
            }
            else
                cout << "Minimum dist between " << i << " - " << j << " : INF" << endl;
        }
    }
}
int main()
{
    cin >> n;
    createGraph();
    Floyd_Warshall();
    display();
}