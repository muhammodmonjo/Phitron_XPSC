#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    set<int> st;
    for (int i = n; i > 0; i--)
    {
        st.insert(a[i]);
        a[i] = st.size();
    }

    vector<int> l(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i];
        cout << a[l[i]] << "\n";
    }

    return 0;
}