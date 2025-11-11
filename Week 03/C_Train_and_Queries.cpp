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
        int n, k;
        cin >> n >> k;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
                cout << "NO\n";
            else
            {
                int a_idx, b_idx;
                a_idx = *mp[a].begin();
                b_idx = *mp[b].rbegin();
                if (a_idx < b_idx)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}