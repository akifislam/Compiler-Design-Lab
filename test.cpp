#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5 + 5;

void solve()
{
    string str;
    cin >> str;

    int oper[100] = {0};
    int flag = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') && (str[i - 1] == '+' || str[i - 1] == '-' || str[i - 1] == '*' || str[i - 1] == '/'))
        {
            cout << "Invalid\n";
            flag = 1;
        }
    }
    if (!flag)
    {
        cout << "Valid\n";
    }
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
}