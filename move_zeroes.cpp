class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int lastZero = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        swap(&nums[lastZero++], &nums[i]);
      }
    }
  }

  void swap(int *a, int *b) {
    int t = *b;
    *b = *a;
    *a = t;
  }
};