#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> st;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        st.insert(t);
    }

    while (m--)
    {
        int op;
        cin >> op;
        auto it = st.lower_bound(op);
        if (it == st.end())
            cout << -1 << "\n";
        else
        {
            cout << *it << "\n";
            st.erase(it);
        }
    }

    return 0;
}