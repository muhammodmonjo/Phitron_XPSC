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

        map<int, int> mp;

        for (int i = 0; i < n; i++)
            mp[a[i]]++;

        int ans = 0;

        for (auto [k, v] : mp)
            ans += max(0, mp[k] - mp[k - 1]);

        cout << ans << "\n";
    }

    return 0;
}