#include <iostream>
using namespace std;
int pow(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    int result = 0;
    result = pow(a, b);
    cout << "power of " << a << " and " << b << " is  : " << result << endl;
    return 0;
}