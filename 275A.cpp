#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fori(i, a, b) for (ll i = a; i < (ll)b; i++)
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    int arr[3][3], i, j, op[3][3];
    fori(i, 0, 3)
    {
        fori(j, 0, 3)
        {
            cin >> arr[i][j];
            op[i][j] = true;
        }
    }
    fori(j, 0, 3)
    {
        fori(i, 0, 3)
        {
            if (arr[j][i] % 2 == 1)
            {
                op[j][i] = not op[j][i];
                if (i < 1)
                    op[j][i + 1] = not op[j][i + 1];
                if (i > 0)
                    op[j][i - 1] = not op[j][i - 1];
                if (j < 1)
                    op[j + 1][i] = not op[j + 1][i];
                if (j > 0)
                    op[j - 1][i] = not op[j - 1][i];
            }
        }
    }
    fori(j, 0, 3)
    {
        fori(i, 0, 3)
        {
            cout << op[j][i] << " ";
        }
        cout << "\n";
    }

    return 8;
}