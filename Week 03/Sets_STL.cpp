#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    set<int> st;
    while (q--)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
            st.insert(x);
        else if (y == 2)
        {
            auto it = st.find(x);
            if (it != st.end())
                st.erase(it);
        }
        else
        {
            if (st.find(x) == st.end())
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }

    return 0;
}