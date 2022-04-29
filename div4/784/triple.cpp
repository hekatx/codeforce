#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int _, arrLength;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> _;
  map<int, int> nmap;
  while (_--) {
    cin >> arrLength;
    int arr[arrLength];

    for (int j = 0; j < arrLength; j++) {
      cin >> arr[j];
      nmap[arr[j]]++;
    };
    bool found = false;
    for (auto el : nmap) {
      if (el.second >= 3) {
        found = true;
        cout << el.first << "\n";
        break;
      }
    };
    if (!found) {
      cout << -1 << "\n";
    }
    nmap.clear();
  }
};

