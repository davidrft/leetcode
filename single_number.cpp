#include <stdio.h>
using namespace std;

int single_number(vector<int> &nums) {
  int bit_vector = 0;

  for (int i = 0; i < nums.size(); i++) {
    bit_vector ^= nums[i];
  }
  return bit_vector;
}

int main() {
  printf("Hello, World!");
  return 0;
}