#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;
    vector<int> A_i(N), B_i(N);
    for (auto &item: A_i)cin >> item;
    std::copy(A_i.begin(), A_i.end(), B_i.begin());
    auto diff = R - P;
    int temp;
    for (int i = P - 1; i < Q; ++i) {
        temp = A_i[i];
        A_i[i] = A_i[i + diff];
        A_i[i + diff] = temp;
    }
    for (auto &item: A_i)cout << item << ' ';
    cout << endl;
}