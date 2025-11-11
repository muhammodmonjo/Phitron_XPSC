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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mn = 1, mx = n;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            if ((a[r] == mx && a[l] == mn) || (a[r] == mn && a[l] == mx))
            {
                r--;
                l++;
                mn++;
                mx--;
            }
            else if (a[r] == mx)
            {
                r--;
                mx--;
            }
            else if (a[r] == mn)
            {
                r--;
                mn++;
            }
            else if (a[l] == mx)
            {
                l++;
                mx--;
            }
            else if (a[l] == mn)
            {
                l++;
                mn++;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << "\n";
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << "\n";
    }

    return 0;
}