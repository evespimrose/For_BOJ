#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> arr(5);

    for (int i = 0; i < 5; i++) 
    {
        cin >> arr[i];
    }

    for (int j = 0; j < 15; j++) 
    {
        for (int i = 0; i < 5; i++) 
        {
            if (j < arr[i].size()) 
            {
                cout << arr[i][j];
            }
        }
    }
}
