#include<iostream>
using namespace std;
void uniqueelement(int arr[],int n){
  int ans=0;
  for(int i = 0;i<n;i++){
    ans = ans ^ arr[i];
  }
  cout << "unoque element is " << ans << endl;
}
int main(){
  int arr[]={2,2,3,3,4,4,5,5,56};
  int size = sizeof(arr)/sizeof(arr[0]);
  uniqueelement(arr,size);
  return 0;
}