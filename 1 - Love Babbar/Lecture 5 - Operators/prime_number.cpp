#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool flag = 1;
    cout << "Enter an Integer : ";
    cin >> n;

    if (n < 2)
    {
        cout << "Integer should be greater than 1" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << n << " is prime number." << endl;
    }
}