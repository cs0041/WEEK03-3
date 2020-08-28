#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> b;
    a = 1;
    while (a <= b)
    {
        if (a % 3 == 0 && a % 5 == 0)
        {
            cout << a << endl;

        }
        a = a + 1;
    }
    return 0;
}
