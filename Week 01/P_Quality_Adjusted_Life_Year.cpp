#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    double qa = 0;
    while (n--)
    {
        double q, y;
        cin >> q >> y;
        qa += q * y;
    }

    cout << fixed << setprecision(3) << qa << endl;

    return 0;
}