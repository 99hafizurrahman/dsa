#include <iostream>
#include <cmath>
using namespace std;

int findUnique(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {

        ans = arr[i] ^ ans;
    }
    return ans;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {1, 2, 3, 1, 2};
    printArray(arr, 5);
    cout << findUnique(arr, 5);

    cout << endl;
    int arr2[5] = {1, 2, 4, 1, 2};
    printArray(arr2, 5);
    cout << findUnique(arr2, 5);
}