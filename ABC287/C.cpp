#include <iostream>
#include <set>
#include <vector>

using namespace std;

void NO() {
    cout << "No" << endl;
    exit(0);
}

void YES() {
    cout << "Yes" << endl;
    exit(0);
}

int main() {
    int N, M, v_1, v_2;
    cin >> N >> M;
    vector<vector<int>> V(N);
    for (int i = 0; i < M; ++i) {
        cin >> v_1 >> v_2;
        V.at(v_1 - 1).push_back(v_2 - 1);
        V.at(v_2 - 1).push_back(v_1 - 1);
    }
    if (V.at(0).size() != 1)NO();
    if (V.at(N - 1).size() != 1)NO();
    for (int i = 0; i < N; ++i) {
        if (i != 0 or i != (N - 1)) {
            if (V.at(i).size() != 2)NO();
        }
        for (int j = 0; j < V.at(i).size(); ++j) {
            if (abs(V.at(i).at(j) - i) >= 2)NO();
        }
    }
    YES();
}