#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans + (digit * pow(2, i));
        i++;
        n = n / 10;
    }
    return ans;
}
int main()
{
    int n, binary = 0;
    cout << "Enter binary number : ";
    cin >> n;
    binary = binaryToDecimal(n);
    cout << "Decimal : " << binary << endl;
    return 0;
}