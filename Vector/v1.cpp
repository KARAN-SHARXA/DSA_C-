#include<vector>
#include <iostream>

using namespace std;
int main(){
  vector<int> vac(5,0);
  cout << "size=" << vac.size() << endl;
  vac.push_back(10);
  cout << "size=" << vac.size() << endl;
  for(int i:vac){
    cout << i << " ";
  }
  cout << vac.front() << endl;
  cout << vac.back() << endl;
  vac.pop_back();
  cout << vac.at(4) << endl;
  cout << vac.size() << endl;
  cout <<vac.capacity() << endl;
  return 0;
}


