#include <iostream>
using namespace std;

int getMax(int num[],int n){
  int max = INT8_MIN;
  for(int i = 0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
    
  }
  return max;
}


int getMin(int num[],int n){
  int min =INT16_MAX;
  for(int i = 0;i<n;i++){
    if(num[i] < min){
      min = num[i];
    }
  }
  return min;
}


int main(){
  int arr[]={4,5,6,7,8,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << "Max is ::" << getMax(arr,size) << endl;
  cout << "Min is ::" << getMin(arr,size)<< endl;
  return 0;

}