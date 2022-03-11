#include <iostream>
using namespace std;
int main()

{
    // Babbar solotion
    int n, count = 0;
    cout << "Enter the number : ";
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (n == ans)
        {
            cout << "Number is power of two";
            return;
        }
        if (ans < INT_MAX)
        {
            ans = ans * 2;
        }
    }
    // My solution
    // int n, count = 0;
    // cout << "Enter the number : ";
    // cin >> n;
    // while (n != 0)
    // {
    //     if (n & 1)
    //     {
    //         count++;
    //     }
    //     n = n >> 1;
    // }

    // if (count == 1)
    // {
    //     cout << "number is power of 2";
    //     return 1;
    // }
    // else
    // {
    //     cout << "Number is not power of 2";
    //     return 0;
    // }

    // Optimal solution
    // return n > 0 and not(n & n - 1);
}