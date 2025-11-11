#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    int i = 1;
    multiset<pair<int, int>> pq;
    multiset<pair<int, int>> st;
    vector<int> ans;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int v;
            cin >> v;
            pq.insert({v, -i});
            st.insert({i, v});
            i++;
        }
        else if (x == 2)
        {
            auto it = *st.begin();
            int p = it.first;
            int m = it.second;
            st.erase(it);
            ans.push_back(p);
            pq.erase({m, -p});
        }
        else
        {
            auto it = *pq.rbegin();
            int m = it.first;
            int p = -it.second;
            ans.push_back(p);
            pq.erase(it);
            st.erase({p, m});
        }
    }

    for (int i : ans)
        cout << i << " ";

    return 0;
}