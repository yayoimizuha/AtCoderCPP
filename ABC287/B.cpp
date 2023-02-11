#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N), T(M);
    vector<bool> ans(N);

    for (auto &item: S) {
        cin >> item;
    }
    for (auto &item: T) {
        cin >> item;
    }
    for (int i = 0; i < N; ++i) {
        ans.at(i) = (T.end() != find(T.begin(), T.end(), S.at(i).substr(3)));
    }
    cout << count(ans.begin(), ans.end(), true) << endl;
}