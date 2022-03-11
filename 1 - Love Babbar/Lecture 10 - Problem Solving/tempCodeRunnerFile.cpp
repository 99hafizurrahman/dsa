#include <iostream>
#include <cmath>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void sortArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 2 && left < right && left < right)
        {
            right--;
        }

        if (arr[left] == 1 && arr[right] == 2 && left < right)
        {
            left++;
            right--;
        }
        if ((arr[left] == 2 && arr[right] == 1) && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    sortArray(arr, 9);
    printArray(arr, 9);
    return 0;
}