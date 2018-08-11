#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

vector<string> fizz_buzz(int n) {
  vector<string> result;
  string to_append;

  for (int i = 1; i <= n; i++) {
    to_append = "";
    if ((i % 3) && (i % 5)) {
      to_append.append(to_string(i));
    } else {
      if (!(i % 3)) {
        to_append = "Fizz";
      }

      if (!(i % 5)) {
        to_append.append("Buzz");
      }
    }
    result.push_back(to_append);
  }

  return result;
}

int main() {
  vector<string> string_array = fizz_buzz(30);
  for (const auto &i : string_array)
    cout << i << '\n';
  return 0;
}