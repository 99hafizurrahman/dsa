#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));
        i++;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n, binary = 0;
    cout << "Enter an integer : ";
    cin >> n;
    binary = decimalToBinary(n);
    cout << "Binary : " << binary << endl;
    return 0;
}