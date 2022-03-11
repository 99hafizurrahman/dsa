#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the term of fibonacci series : ";
    cin >> n;
    int t1 = 0, t2 = 1, nextTerm;
    cout << t1 << " " << t2 << " ";

    for (int i = 0; i <= n; i++)
    {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}