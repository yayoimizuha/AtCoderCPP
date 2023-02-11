#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int check_close(const vector<set<int>> &Graph);

void drop(vector<set<int>> &Graph, set<pair<int, int>> drops);

int main() {
    int N, M, A_i, B_i;
    cin >> N >> M;
    vector<set<int>> Graph(N);
    set<pair<int, int>> branch;
    for (auto i = 0; i < N; ++i) {
        cin >> A_i >> B_i;
        A_i--;
        B_i--;
        Graph.at(A_i).insert(B_i);
        Graph.at(B_i).insert(A_i);
        branch.insert(make_pair(A_i, B_i));
    }
    cout << check_close(Graph) << endl;
}

int check_close(const vector<set<int>> &Graph) {
    vector<bool> seen(Graph.size(), false);
    seen.at(0) = true;
    int viewed = 0;
    while (true) {
        auto view = 0;
        int attacked = 0;
        for (int i = 0; i < Graph.size(); ++i) {
            if (seen.at(i)) {
                view++;
                int cnt = 0;
                for (auto &item: Graph.at(i)) {
                    if (!seen.at(item))cnt++;
                    seen.at(item) = true;
                }
                if (cnt >= 2)attacked++;
            }
        }
        if (view == viewed)return attacked;
        viewed = view;
    }
}