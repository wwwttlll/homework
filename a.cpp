#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, geshu;

    while (cin >> n)
    {
        if (n >= 1 && n <= 10000)
        {
            geshu = 0;
            for (int i = 1; i <= n; i++)
            {
                if (i % 3 == 0 && ((i % 10 == 5) || (i / 10) % 10 == 5 || i / 100 == 5))
                {

                    geshu++;
                }
            }
            cout << geshu << endl;
        }
    }

    return 0;
}
