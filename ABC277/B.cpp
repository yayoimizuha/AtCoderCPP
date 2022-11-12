#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &S_i: S) {
        cin >> S_i;
    }
    for (int i = 0; i < S.size(); ++i) {
        auto order = S[i];
        if (string("HDCS").find(order[0]) == string::npos ||
            string("A23456789TJQK").find(order[1]) == string::npos) {
            cout << "No" << endl;
            return 0;
        }
        for (int j = i + 1; j < S.size(); ++j) {
            if (S[i] == S[j]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}