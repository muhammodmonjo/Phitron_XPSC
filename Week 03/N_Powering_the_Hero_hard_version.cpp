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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        priority_queue<long long> pq;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(a[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}