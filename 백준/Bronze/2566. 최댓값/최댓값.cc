#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int max_val = -1;
    pair<int, int> pos;

    for (int i = 1; i <= 9; i++) 
    {
        for (int j = 1; j <= 9; j++) 
        {
            int num;
            cin >> num;

            if (num > max_val) 
            {
                max_val = num;
                pos = {i, j};
            }
        }
    }

    cout << max_val << '\n' << pos.first << ' ' << pos.second;
}
