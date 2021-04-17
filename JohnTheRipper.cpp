#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y, x;

    cin >> y;

    for (int i = 0; i < y; i++)
    {
        cin >> x;
        int strng[x];
        for (int j = 0; j < x; j++)
        {
            cin >> strng[j];
            if (strng[j] < 65)
            {
                strng[j] += 64;
            }
        }
        for (int k = 0; k < x; k++)
        {
            cout << char(strng[k]);
        }
        cout << endl;
    }

    return 0;
};
