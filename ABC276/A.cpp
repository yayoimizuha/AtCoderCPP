#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;
    size_t n_count = S.rfind('a');
    if (n_count == string::npos) {
        cout << -1 << endl;
    } else {
        cout << n_count + 1 << endl;
    }
}
