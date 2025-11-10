#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;
    if (abs(x - y) <= z)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}