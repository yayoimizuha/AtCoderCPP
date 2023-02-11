#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N, M, C, a_i;
    cin >> N >> M;
    vector<set<int>> a(M);
    for (int i = 0; i < M; ++i) {
        cin >> C;
        for (int j = 0; j < C; ++j) {
            cin >> a_i;
            a.at(i).insert(a_i);
        }
    }
    int cnt = 0;
    for (int i = 0; i <= M; ++i) {
        vector<bool> perm(M, true);
        for (int j = 0; j < i; ++j) {
            perm.at(j) = false;
        }
        do {
            set<int> s = {};
            for (int j = 0; j < M; ++j) {
                if (perm.at(j)) {
                    auto SET = a.at(j);
                    s.merge(SET);
                }
            }

            for (int j = 1; j <= N; ++j) {
                if (s.find(j) == s.end()) {
                    goto JMP;
                }
            }
            cnt++;
            JMP:;
        } while (next_permutation(perm.begin(), perm.end()));
    }
    cout << cnt << endl;
}