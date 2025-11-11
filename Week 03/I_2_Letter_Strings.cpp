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
        vector<string> s(n);

        for (int i = 0; i < n; i++)
            cin >> s[i];

        map<char, int> fm, sm;
        map<string, int> mp;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += fm[s[i][0]]++;
            ans += sm[s[i][1]]++;
            ans -= 2 * mp[s[i]]++;
        }

        cout << ans << "\n";
    }

    return 0;
}