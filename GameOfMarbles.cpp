#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{

    if (a == 0 || b == 0)
    {

        return 2 * (a + b);
    }
    else if (a == 1 || b == 1)
    {
        return 2;
    }
    return gcd(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    long long int n, m;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> n >> m;
        if (n == 0 || m == 0)
            
        {
            cout << m + n<<endl;
        }
        else 
        {
            cout << gcd(n, m) << endl;
        }
    }
    return 0;
}