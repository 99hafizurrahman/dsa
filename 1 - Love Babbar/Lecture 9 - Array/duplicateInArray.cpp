// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++)
    {

        ans = ans ^ arr[i];
        cout << ans << endl;
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}
int main()
{
    int arr[5] = {1, 2, 4, 3, 4};
    cout << findDuplicate(arr, 5);
}