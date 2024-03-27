#include <bits/stdc++.h>
using namespace std;

int m, res;
string n;

void conv(string n, int m)
{
    for(int i = n.size() -1; i >= 0; i--)
    {
        if (isdigit(n[i]))
        {
            res += (int)(n[i] - '0') * pow(m, n.size() - i - 1);    
        }
        else res += (int)(n[i] - 'A') * pow(m, n.size() - i - 1);
    }
}

int main()
{
    cin >> n >> m;

    conv(n, m);

    cout << res << '\n';

    return 0;
}