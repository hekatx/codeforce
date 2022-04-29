#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int _, inputLen;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> _;
  while (_--) {
    cin >> inputLen;
    int input[inputLen];
    for (int i = 0; i < inputLen; i++) {
      cin >> input[i];
    };
    bool isPossible = true;
    int evenMod = input[0] % 2;
    for (int i = 0; i < inputLen; i += 2) {
      if (input[i] % 2 != evenMod) {
        isPossible = false;
        break;
      }
    };
    int oddMod = input[1] % 2;
    for (int i = 1; i < inputLen; i += 2) {
      if (input[i] % 2 != oddMod) {
        isPossible = false;
        break;
      }
    };

    if (isPossible)
      cout << "yes"
           << "\n";
    else
      cout << "no"
           << "\n";
  }
};
