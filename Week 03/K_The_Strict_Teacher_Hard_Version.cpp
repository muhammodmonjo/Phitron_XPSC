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
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        while (q--)
        {
            int d;
            cin >> d;

            if (a[0] > d)
                cout << a[0] - 1 << "\n";
            else if (a[m - 1] < d)
                cout << n - a[m - 1] << "\n";
            else
            {
                auto it = upper_bound(a.begin(), a.end(), d);
                auto jt = it;
                it--;

                int r = *it, l = *jt;
                int mid = (l + r) / 2;
                int ans = min(abs(mid - l), abs(mid - r));
                cout << ans << "\n";
            }
        }
    }

    return 0;
}