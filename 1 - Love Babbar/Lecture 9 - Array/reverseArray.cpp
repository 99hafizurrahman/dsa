#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void reverseArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);

    start++;
    end--;
  }
}
int main()
{

  int arrOne[10] = {5, 8, 11, 14, 17, 20, 23, 26, 29, 31};
  int arrTwo[5] = {2, 3, 4, 8, 9};

  reverseArray(arrOne, 10);
  reverseArray(arrTwo, 5);

  printArray(arrOne, 10);
  printArray(arrTwo, 5);

  return 0;
}
