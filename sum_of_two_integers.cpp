#include <stdio.h>
using namespace std;

int add(int a, int b) {
  while (a) {
    int t = (a & b) << 1;
    b ^= a;
    a = t;
  }
  return b;
}

int main() {
  printf("%d", add(2, -30));
  return 0;
}
