#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> items(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> items[i].first >> items[i].second; // {무게, 가치}
    }

    vector<int> dp(K + 1, 0);

    for (int i = 0; i < N; i++) 
    {
        int weight = items[i].first;
        int value = items[i].second;

        for (int j = K; j >= weight; j--) 
        {
            dp[j] = max(dp[j], dp[j - weight] + value);
        }
    }

    cout << dp[K] << "\n";
}
