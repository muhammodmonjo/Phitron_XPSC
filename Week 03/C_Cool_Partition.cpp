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

        int ans = 1, idx = 0;
        set<int> st;
        st.insert(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (st.find(a[i]) != st.end())
                st.erase(a[i]);
            if (st.empty())
            {
                ans++;
                for (int j = idx + 1; j <= i; j++)
                    st.insert(a[j]);

                idx = i;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}