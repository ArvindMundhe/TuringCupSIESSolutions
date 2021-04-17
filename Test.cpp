#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long int a = 5, b = 9;
    while (a != b && (a != 0 || b != 0))
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
        cout<<a<<"   "<<b<<endl;
    }
    cout<<endl<<"##############################################"<<endl<<a+b<<endl<<"##############################################";
    return 0;
}