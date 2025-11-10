#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n)
    {
        if (n != 0)
        {
            int ans = (n * (n + 1) * (2 * n + 1)) / 6;
            cout << ans << endl;
        }
    }

    return 0;
}