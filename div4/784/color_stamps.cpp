#include <bits/stdc++.h>
using namespace std;
int _, n;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> _;
  while (_--) {
    cin >> n;
    string pic;
    cin >> pic;

    int r = 0, b = 0;

    bool flag = true;

    for (int i = 0; i <= n; i++) {
      char curr = pic[i];
      if (curr == 'R')
        r++;
      if (curr == 'B')
        b++;
      if (curr == 'W' || i == n) {
        if ((!r && b) || (!b && r)) {
          flag = false;
          break;
        }
        r = 0;
        b = 0;
      }
    }

    if (flag)
      cout << "yes"
           << "\n";
    else
      cout << "no"
           << "\n";
  }
  return 0;
};
