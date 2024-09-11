#include<iostream>
#include<string>

using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    string s;

    while (T--)
    {
        cin >> s;
        cout << s.front() << s.back() << endl;
    }

}