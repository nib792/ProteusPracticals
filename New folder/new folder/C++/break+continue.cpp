#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        // cout << i << endl;
        if (i == 2)
        {
            continue;
            // break;
        }
        cout << i << endl;
    }
    return 0;
}