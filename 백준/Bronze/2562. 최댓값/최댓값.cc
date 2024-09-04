#include <iostream>

using namespace std;

int main() 
{
    int arr[9];
    int MAX = -1;
    int count = 0;
    for(int i = 0; i < 9; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 9; ++i)
    {
        if(arr[i] > MAX)
        {
            MAX = arr[i];
            count = i;
        }
    }
    cout << MAX << endl << count + 1 << endl;
    
}