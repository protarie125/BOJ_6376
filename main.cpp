#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll Fact(ll n) {
  if (n <= 1) {
    return 1;
  }

  ll ret = 1;
  for (auto i = 2; i <= n; ++i) {
    ret *= i;
  }

  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cout << "n e\n"
       << "- -----------\n";
  double e = 0;
  for (auto i = 0; i <= 9; ++i) {
    e += 1.0 / Fact(i);

    if (i == 0)
      cout << setprecision(0);
    else if (i == 2)
      cout << setprecision(1);
    else if (i == 3)
      cout << setprecision(9);

    cout << i << ' ' << fixed << e << '\n';
  }

  return 0;
}