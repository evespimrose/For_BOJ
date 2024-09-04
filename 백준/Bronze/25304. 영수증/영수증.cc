#include <iostream>
using namespace std;

int main()
{
    int X;
    int N;
    int a;
    int b;
    cin >> X;
    cin >> N;
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;
        result += (a * b);
    }
    if(result == X)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}