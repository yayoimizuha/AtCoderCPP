#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> cities;
    cities.resize(N);
    int A_i, B_i;
    for (int i = 0; i < M; ++i) {
        cin >> A_i >> B_i;
        cities.at(A_i - 1).push_back(B_i);
        cities.at(B_i - 1).push_back(A_i);
        //cities[B_i - 1][A_i - 1] = true;
        //cities[B_i][A_i] = true;
    }
    for (vector<int> slice: cities) {
        cout << slice.size() << ' ';
        sort(slice.begin(), slice.end());
        for (int point: slice) {
            cout << point << ' ';
        }
        cout << endl;
    }
}