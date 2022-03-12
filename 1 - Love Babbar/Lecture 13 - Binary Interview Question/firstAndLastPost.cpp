#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {

    if (arr[mid] == key)
    {
      ans = mid;
      e = mid - 1;
    }
    else if (key > arr[mid])
    { // Right me jao
      s = mid + 1;
    }
    else if (key < arr[mid])
    { // left me jao
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}

int lastOccurence(int arr[], int n, int key)
{

  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {

    if (arr[mid] == key)
    {
      ans = mid;
      s = mid + 1;
    }
    else if (key > arr[mid])
    { // Right me jao
      s = mid + 1;
    }
    else if (key < arr[mid])
    { // left me jao
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
  int arr[6] = {1, 2, 3, 4, 3, 5};
  int key = 3;
  cout << "First occurence of " << key << " is at index " << firstOccurence(arr, 6, key) << endl;
  cout << "Last occurence of " << key << " is at index " << lastOccurence(arr, 6, key) << endl;
}