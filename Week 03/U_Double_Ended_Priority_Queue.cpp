#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    multiset<int> st;
    while (n--)
    {
        int v;
        cin >> v;
        st.insert(v);
    }
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int v;
            cin >> v;
            st.insert(v);
        }
        else if (x == 1)
        {
            auto it = st.begin();
            cout << *it << "\n";
            st.erase(it);
        }
        else
        {
            auto it = st.end();
            it--;
            cout << *it << "\n";
            st.erase(it);
        }
    }

    return 0;
}