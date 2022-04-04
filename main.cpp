#include <iostream>
using namespace std;

int main()
{
    float a, b, c, del;
    while (cin >> a >> b >> c)
    {
        if (a != 0)
        {
            del = (b * b) + (4 * (a * c)) * -1;
            if (del < 0)
            {
                cout << "0\n";
            }
            else if (del == 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
    }
}

//https://pl.spoj.com/problems/ROWNANIE/
