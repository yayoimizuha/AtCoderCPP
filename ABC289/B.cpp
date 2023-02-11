#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

int main() {
    int N, M, a_i;
    cin >> N >> M;
    vector<vector<int>> a = {{0}};
    for (int i = 0; i < M; ++i) {
        cin >> a_i;
        if (a.at(a.size() - 1).at(a.at(a.size() - 1).size() - 1) == a_i - 1) {
            a.at(a.size() - 1).push_back(a_i);
        } else {
            a.push_back({a_i});
        }
    }
    for (auto &item: a) {
        item.push_back(item.at(item.size() - 1) + 1);
    }
    a.begin()->erase(a.begin()->begin());
    //for (auto &item: a) {
    //    for (auto &key: item) {
    //        cout << key << ' ';
    //    }
    //    cout << endl;
    //}
    for (int i = 1; i <= N; ++i) {
        for (auto &item: a) {
            auto res = find(item.begin(), item.end(), i);
            if (res != item.end()) {
                auto be = item.at(0);
                auto en = item.at(item.size() - 1);
                cout << be + en - i << ' ';
                goto JMP;
            }
        }
        cout << i << ' ';
        JMP:;
    }
    cout << endl;
}