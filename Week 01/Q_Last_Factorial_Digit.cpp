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
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans *= i;
        }

        cout << ans%10 << endl;
    }

    return 0;
}