#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<priority_queue<int>> a(n);

    while (q--)
    {
        int i, p, x;
        cin >> i;
        if (i == 0)
        {
            int p, x;
            cin >> p >> x;
            a[p].push(x);
        }
        else if (i == 1)
        {
            cin >> p;
            if (!a[p].empty())
                cout << a[p].top() << "\n";
        }
        else if (i == 2)
        {
            cin >> p;
            if (!a[p].empty())
                a[p].pop();
        }
    }

    return 0;
}