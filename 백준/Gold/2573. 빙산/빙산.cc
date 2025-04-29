#include <bits/stdc++.h>

using namespace std;

int n, m;

bool IsOOB(int x, int y) { return x < 0 || x >= n || y < 0 || y >= m; }

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    vector<vector<int>> ice(n, vector<int>(m));
    vector<vector<int>> visited(n, vector<int>(m, 0));
    vector<vector<int>> melt(n, vector<int>(m, 0));

    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {-1, 1, 0, 0};
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> ice[i][j];
        }
    }


    int years = 0;
    while (true) 
    {
        int cnt = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (ice[i][j] > 0 && !visited[i][j]) 
                {
                    cnt++;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = 1;

                    while (!q.empty()) 
                    {
                        auto [x, y] = q.front();
                        q.pop();

                        for (int k = 0; k < 4; k++) 
                        {
                            int nx = x + dx[k];
                            int ny = y + dy[k];

                            if (!IsOOB(nx, ny)) 
                            {
                                if (ice[nx][ny] == 0) 
                                {
                                    melt[x][y]++;
                                } 
                                else if (!visited[nx][ny]) 
                                {
                                    visited[nx][ny] = 1;
                                    q.push({nx, ny});
                                }
                            }
                        }
                    }
                }
            }
        }

        if (cnt == 0) 
        {
            cout << 0;
            return 0;
        }
        if (cnt >= 2) 
        {
            cout << years;
            return 0;
        }

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                ice[i][j] -= melt[i][j];
                melt[i][j] = 0;
                if (ice[i][j] < 0) ice[i][j] = 0;
            }
        }

        years++;
        fill(visited.begin(), visited.end(), vector<int>(m, 0));

        fill(melt.begin(), melt.end(), vector<int>(m, 0));
    }
}