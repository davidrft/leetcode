#include <bits/stdc++.h>
using namespace std;

void reverse_str(string &str) {
  int length = str.length();
  for (int i = 0; i < length / 2; i++) {
    swap(str[i], str[length - i - 1]);
  }
}

int main() {
  string hello_world = "Hello, World!";
  reverse_str(hello_world);
  cout << hello_world;
  return 0;
}