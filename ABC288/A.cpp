#include <iostream>

using namespace std;

int main() {
    long long N, A, B;
    cin >> N;
    for (long long i = 0; i < N; ++i) {
        cin >> A >> B;
        cout << (A + B) << endl;
    }
}