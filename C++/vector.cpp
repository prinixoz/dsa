#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  vector<int> vec = {1,2,3,4,5};
  for (unsigned int i=0;i<vec.size();i++) cout << vec[i] << endl;
  return 0;
}
