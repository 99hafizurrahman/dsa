#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // My solution faster than 100 %
    int n, i = 0, ans = 0;
    cout << "Enter number : ";
    cin >> n;
    while (n != 0)
    {
        int bit = !(n & 1);
        ans = ans + bit * pow(2, i);
        n = n >> 1;
        i++;
    }
    cout << ans;

    // 2- Babbar bhaiya solution
    // int m = n;
    // int mask = 0;
    // if (n == 0)
    // {
    //     return 1;
    // }

    // while (m != 0)
    // {
    //     mask = (mask << 1) | 1;
    //     m = (m >> 1);
    // }

    // int ans = (~n) & mask;
    // cout << ans;
}