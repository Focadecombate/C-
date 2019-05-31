#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(false);
    int a, v, x, y, t = 1;
    for (cin >> a >> v; a != 0 && v != 0; cin >> a >> v)
    {
        vector<vi> aero(a);
        for (int i = 0; i < a; ++i)
            aero[i].resize(2);
        for (int i = 0; i < a; ++i)
            aero[i][1] = i + 1;
        for (int i = 0; i < v; ++i)
        {
            cin >> x >> y;
            ++aero[x - 1][0];
            ++aero[y - 1][0];
        }
        sort(aero.begin(), aero.end());
        int cont = 0;
        cout << "Teste " << t++ << "\n";
        for (int i = 0; i < a; ++i)
        {
            if (cont >= 1)
                cout << " ";
            if (aero[i][0] == aero[a - 1][0])
            {
                cout << aero[i][1];
                ++cont;
            }
        }
        cout << "\n\n";
    }
    return 0;
}
