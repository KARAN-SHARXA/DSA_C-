#include <iostream>
using namespace std;

void alterNativeswap(int arr[], int size)
{

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
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{ // 0,1,2,3,4size = 5
  int arr[] = {5, 6, 7, 81, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  alterNativeswap(arr, size);
  printArray(arr, size);
}