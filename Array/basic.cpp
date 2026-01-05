#include <iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i = 0; i< n;i++){
    cout << arr[i] <<" ";
  }
}



int main(){
  int arr[] = {10,20,30,40,50};
  int arr2[]={1,2,3,4,5};
  int size_to = sizeof(arr2)/sizeof(arr2[0]);
  int size = sizeof(arr)/sizeof(arr[0]);
  printArray(arr,size);
  cout<<endl;
  printArray(arr2,size_to);

 
  return 0;
}