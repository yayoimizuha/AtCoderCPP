//
// Created by tomokazu on 2022/11/12.
//
#include <bits/stdc++.h>

using namespace std;
int N, X;
vector<int> P;

int main() {
    cin >> N >> X;
    P.resize(N);
    for (auto &P_i: P) {
        cin >> P_i;
    }
    for (int i = 0; i < N; ++i) {
        if (P[i] == X) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}