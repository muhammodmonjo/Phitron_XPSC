#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;
    set<int> light;
    multiset<int> dis;

    light.insert(0);
    light.insert(x);
    dis.insert(x);

    for (int i = 0; i < n; i++)
    {
        int tl;
        cin >> tl;

        auto l = light.upper_bound(tl);
        auto r = l;
        l--;

        dis.erase(dis.find(*r - *l));
        dis.insert(*r - tl);
        dis.insert(tl - *l);

        light.insert(tl);

        cout << *dis.rbegin() << " ";
    }

    return 0;
}