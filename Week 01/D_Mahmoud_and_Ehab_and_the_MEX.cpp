#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int oper = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < x)
            oper++;
        if (a[i] == x)
            flag = true;
    }

    if (flag)
        cout << x - oper + 1 << endl;
    else
        cout << x - oper << endl;
    return 0;
}