#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t < 1 || t > 50)
    {
        cout << "err";

    }

    for (int i = 1; i <= 12; i++)
    {
        int x = i * t;
        cout << t << " " << "*" << " " << i << " " << "=" << " " << x << endl;
    }
    return 0;
}
