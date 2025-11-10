#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    bool flag = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == 's' && s[i] == 's')
        {
            flag = true;
            break;
        }
    }

    if(flag)
    cout << "hiss\n";
    else
    cout << "no hiss\n";

    return 0;
}