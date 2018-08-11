#include <stdio.h>

int hamming_distance(int a, int b) { return __builtin_popcountll(a & b); }

int main() {
  printf("Result: %d", hamming_distance(2, 4));
  return 0;
}