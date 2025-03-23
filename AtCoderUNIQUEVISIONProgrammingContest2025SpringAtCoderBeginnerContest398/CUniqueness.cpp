#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  unordered_map<int, int> frequency;
  for (int i = 0; i < N; ++i) {
    frequency[A[i]]++;
  }

  int max_unique_value = -1;
  int result_person_label = -1;

  for (int i = 0; i < N; ++i) {
    if (frequency[A[i]] == 1) {      // Check if the integer is unique
      if (A[i] > max_unique_value) { // Update if it's the largest unique so far
        max_unique_value = A[i];
        result_person_label = i + 1; // Labels are 1-based
      }
    }
  }

  cout << result_person_label << "\n";

  return 0;
}
