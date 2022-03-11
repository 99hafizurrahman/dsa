#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;
    int carry = 1;
    int i = 0;
    while (n != 0)

    {
        int bit = !(n & 1);
        carry = bit & 1;

        ans = ans + carry * pow(2, i);
        i++;
        n = n >> 1;
    }

    return ans;
}
int main()
{
    int n;
    cout << "enter a negative decimal number : ";
    cin >> n;
    int arr[5] = {[0 ... 4] = 1};
    cout << arr << endl;
    ` int result = decimalToBinary(n);

    cout << result << endl;
}