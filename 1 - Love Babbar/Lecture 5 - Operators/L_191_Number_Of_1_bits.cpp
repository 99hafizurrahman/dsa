#include <iostream>
using namespace std;

int numberOfOneBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{

    int n;
    cout << "Enter an integer : ";
    cin >> n;

    int bits = numberOfOneBits(n);
    cout << "Number of 1 bits in " << n << " is " << bits << endl;
    cout << "End";
    return 0;
}