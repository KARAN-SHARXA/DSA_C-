#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
  }
  return 0;
}
int main()
{
  int key = 8;
  int arr[] = {4, 5, 6, 7, 8, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  bool found = linearSearch(arr, size, key);
  if (found)
  {
    cout << "key is present " << endl;
  }
  else
  {
    cout << "key is not present" << endl;
  }
  return 0;
}