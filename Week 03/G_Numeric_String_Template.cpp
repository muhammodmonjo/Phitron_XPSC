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

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            bool flag = true;
            if (s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            bool ans = true;
            map<char, int> mp_c;
            map<int, char> mp_i;
            for (int i = 0; i < n; i++)
            {
                if (mp_c.count(s[i]) && mp_c[s[i]] != a[i])
                {
                    ans = false;
                    break;
                }
                if (mp_i.count(a[i]) && mp_i[a[i]] != s[i])
                {
                    ans = false;
                    break;
                }

                mp_c[s[i]] = a[i];
                mp_i[a[i]] = s[i];
            }

            if (ans)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}