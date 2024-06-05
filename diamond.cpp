#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // loop for printing the upper pyramid
    for (int i = 1; i <= n; i++)
    {
        int spaces = (n - i);
        int characters = (2 * i - 1);
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < characters; k++)
        {
            cout << (char)('A' + k);
        }
        cout << endl;
    }
    // loop for printing the lower pyramid
    for (int i = (n + 1); i <= (2 * n - 1); i++)
    {
        int spaces = i - n;
        int characters2 = (2 * (2 * n - i) - 1);
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < characters2; k++)
        {
            cout << (char)('A' + k);
        }
        cout << endl;
    }
}