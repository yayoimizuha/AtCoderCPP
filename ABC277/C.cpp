#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, pair<bool, vector<int>>> LADDER;

void recursive_search(int i);

auto max_order = 1;

int main() {
    int N, A_i, B_i;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A_i >> B_i;
        LADDER[A_i].second.push_back(B_i);
        LADDER[A_i].first = false;
        LADDER[B_i].second.push_back(A_i);
        LADDER[B_i].first = false;
    }
    LADDER[1].first = true;

    recursive_search(1);
    cout << max_order << endl;
}

void recursive_search(int i) {
    LADDER[i].first = true;
    for (auto j: LADDER[i].second) {
        if (!LADDER[j].first) {
            recursive_search(j);
        }
    }
    max_order = max(max_order, i);
}