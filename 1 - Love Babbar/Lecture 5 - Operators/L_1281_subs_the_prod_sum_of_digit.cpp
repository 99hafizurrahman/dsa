#include <iostream>
using namespace std;
int main()
{

    int n;
    int sum = 0, prod = 1;
    cout << "Input numbers : ";
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }

    cout << "Result : " << prod - sum << endl;

    return 0;
}