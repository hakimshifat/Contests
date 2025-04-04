// time-limit: 2000
// problem-url: https://codeforces.com/contest/66/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int maxReceiveWaterMiddle(int arr[], int size) {
  int cnt = 0;
  int maxCnt = 0;
  int maxIdx = 0;
  for (int i = 0; i < size; i++) {
    int cnt = 0;
    for (int j = i; j > 0; j--) {
      if (arr[j - 1] <= arr[j]) {
        cnt++;
      } else {
        break;
      }
    }
    for (int j = i; j < size - 1; j++) {
      if (arr[j + 1] <= arr[j]) {
        cnt++;
      } else {
        break;
      }
    }
    if (cnt > maxCnt) {
      maxCnt = cnt;
      maxIdx = i;
    }
  }
  return maxIdx;
}

int32_t main() {
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int maxIndex = maxReceiveWaterMiddle(arr, size);
  int cnt = 0;

  for (int i = maxIndex; i < size - 1; i++) {
    if (arr[i + 1] <= arr[i]) {
      cnt++;
    } else {
      break;
    }
  }

  for (int i = maxIndex; i > 0; i--) {
    if (arr[i - 1] <= arr[i]) {
      cnt++;
    } else {
      break;
    }
  }

  cout << cnt + 1;
  return 0;
}
