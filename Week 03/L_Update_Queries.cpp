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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        string sd;
        cin >> sd;
        sort(sd.begin(), sd.end());

        int idx = 0;
        for (int it : st)
        {
            s[it - 1] = sd[idx];
            idx++;
        }

        cout << s << "\n";
    }

    return 0;
}