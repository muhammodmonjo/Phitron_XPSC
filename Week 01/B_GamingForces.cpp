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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count1 = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 1)
                ans++;
            else
                count1++;
        }

        if (count1 % 2 == 0)
            ans += count1 / 2;
        else
            ans += (count1 / 2) + 1;

        cout << ans << "\n";
    }

    return 0;
}