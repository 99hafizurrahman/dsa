#include <iostream>
#include <cmath>
using namespace std;

void swapAlternate(int arr[], int size)

{

    // My solution
    // int start = 0;
    // int end = start + 1;
    // for (int i = 0; i < size / 2; i++)
    // {
    //     if (i + 1 <= end)

    //     {
    //         swap(arr[start], arr[end]);
    //         start += 2;
    //         end = start + 1;
    //     }
    // }

    // love babbar solution
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int size)

{
    cout << "Inside Print" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    swapAlternate(arr, 6);
    printArray(arr, 6);

    int arr2[6] = {1, 2, 3, 4, 5};

    swapAlternate(arr2, 5);
    printArray(arr2, 5);
}