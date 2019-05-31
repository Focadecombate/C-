#include <iostream>
using namespace std;
int main()
{
    int n, p, a;
    for (;;)
    {
        cin >> n >> p;
        if (n==0 && p == 0)
        {
            break;
        }
        else
        {
            a = n / p;
            if (n % p != 0)
            {
                a++;
            }
            if (a <= 6)
            {
                cout << "Poodle" << endl;
            }
            else if (a > 6 && a < 20)
            {
                cout << "P";
                for (int i = 0; i < a - 4; i++)
                {
                    cout << "o";
                }
                cout << "dle" << endl;
            }
            if (a >= 20)
            {
                cout << "Poooooooooooooooodle"<<endl;
            }
        }
    }
return 0;
}