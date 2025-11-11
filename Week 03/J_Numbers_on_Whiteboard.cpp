#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        cout << 2 << "\n";
        cout << n - 1 << " " << n << "\n";
        int x = n, y = n - 2;
        while (x >= 3)
        {
            cout << y << " " << x << "\n";
            x--;
            y--;
        }
    }

    return 0;
}