#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K, TMP;
    cin >> N >> K;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        if (i < K) {
            cin >> TMP;
            continue;
        }
        cin >> A[i - K];
    }
    for (auto i: A) {
        cout << i << ' ';
    }
}