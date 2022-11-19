#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Q, T, A, B;
    cin >> N >> Q;
    map<int, set<int>> NETWORK;
    for (int i = 0; i < Q; ++i) {
        cin >> T >> A >> B;
        if (T == 1) {
            NETWORK[B].insert(A);
        } else if (T == 2) {
            NETWORK[B].erase(A);
        } else if (T == 3) {
            if ((NETWORK[B].count(A) == 1) && (NETWORK[A].count(B) == 1)) {
                cout << "Yes";
            } else {
                cout << "No";
            }
            cout << endl;
        }
    }
}