#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> num, int k) {
  vector<int> temp(num.size());
  for (int i = 0; i < num.size(); i++) {
    temp[(i + k) % num.size()] = num[i];
  }
  num = temp;
  for (auto i : num)
    cout << i << " ";
}
int main() {
  vector<int> num = {1, 2, 3, 4, 5};
  rotate(num, 2);
  return 0;
}