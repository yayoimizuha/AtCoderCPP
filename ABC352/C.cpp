#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<unsigned long long> A(N), B(N), SUM(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i] >> B[i];
    }
    auto red = reduce(A.begin(), A.end());
    for (int i = 0; i < N; ++i) {
        SUM[i] = red - A[i] + B[i];
    }
    cout << *max_element(SUM.begin(), SUM.end()) << endl;
}