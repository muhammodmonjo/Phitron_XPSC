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
        map<int, int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        priority_queue<int> pq;
        for (auto [x, y] : mp)
            pq.push(y);

        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;

            int x, y;
            x = pq.top();
            pq.pop();

            y = pq.top();
            pq.pop();
            x--;
            y--;

            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }

    return 0;
}