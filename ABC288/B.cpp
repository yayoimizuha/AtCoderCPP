#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    unsigned short N, K;
    cin >> N >> K;
    string trash;
    vector<string> S(K);
    for (int i = 0; i < K; ++i) {
        cin >> S.at(i);
    }
    for (int i = K; i < N; ++i) {
        cin >> trash;
    }
    sort(S.begin(), S.end());
    for (int i = 0; i < K; ++i) {
        cout << S.at(i) << endl;
    }
}