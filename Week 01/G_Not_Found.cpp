#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<int> friq(26);

    for (int i = 0; i < s.size(); i++)
        friq[s[i] - 'a']++;

    bool flag = false;
    char ans;

    for (int i = 0; i < 26; i++)
    {
        if (friq[i] == 0)
        {
            ans = i + 'a';
            flag = true;
            break;
        }
    }

    if (flag)
        cout << ans << endl;
    else
        cout << "None\n";

    return 0;
}