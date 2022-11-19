#include <vector>
#include <iostream>

using namespace std;

int main() {
    int N, Q, q;
    unsigned long arg1, arg2;
    cin >> N;
    vector<unsigned long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        cin >> q;
        if (q == 1) {
            cin >> arg1;
            std::fill(A.begin(), A.end(), arg1);
        } else if (q == 2) {
            cin >> arg1 >> arg2;
            A[arg1 - 1] += arg2;
        } else if (q == 3) {
            cin >> arg1;
            cout << A[arg1 - 1] << endl;
        } else {
            continue;
        }
    }
}