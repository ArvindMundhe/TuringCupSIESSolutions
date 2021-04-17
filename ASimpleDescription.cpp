#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N;
    cin >> T;
    int lengthStrings[T];
    string ipStrings[T];
    string answers[T][2];

    for (int i = 0; i < T; i++)
    {
        answers[i][0] = answers[i][1] = -1;
        cin >> lengthStrings[i];
        cin >> ipStrings[i];
        for (int j = 0; j < lengthStrings[i]; j++)
        {
            if (isalpha(ipStrings[i][j]))
            {

                answers[i][0] = ipStrings[i][j];
            }

            else
                break;
        }
    }

    return 0;
}