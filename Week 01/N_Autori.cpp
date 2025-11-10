#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '-')
            cout << s[i + 1];
    }

    return 0;
}