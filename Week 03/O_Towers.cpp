#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<int> st;
    for (int i : a)
    {
        auto it = st.upper_bound(i);
        if (it == st.end())
            st.insert(i);
        else
        {
            st.erase(it);
            st.insert(i);
        }
    }

    cout << st.size() << "\n";

    return 0;
}