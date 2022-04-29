#include <iostream>
#include <unordered_map>
using namespace std;

int _, arrLength;

void triple() {
  cin >> arrLength;
  int arr[arrLength];

  unordered_map<int, int> nmap;
  int res = 0;
  int v;
  for (int j = 0; j < arrLength; j++) {
    cin >> arr[j];
    nmap[arr[j]]++;
  };
  for (auto el : nmap) {
    if (el.second >= 3) {
      res = el.first;
      cout << res << "\n";
      break;
    }
  };
  if (res == 0)
    cout << -1 << "\n";
}

int main() {
  cin >> _;
  while (_--)
    triple();
};

