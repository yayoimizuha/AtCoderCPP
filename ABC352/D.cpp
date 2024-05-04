#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int N, K, P_i;
    cin >> N >> K;
    map<int, int> P;
    int min_val = INT_MAX;
    for (int i = 0; i < N; ++i) {
        cin >> P_i;
        P[P_i] = i + 1;
    }
    set<int> pool;
    for (int i = 1; i <= N; ++i) {
        pool.insert(P[i]);
        if (pool.size() >= K) {
            auto diff = *pool.rbegin() - *pool.begin();
            pool.erase(P[i - K + 1]);
            if (diff < min_val)min_val = diff;
        }
    }
    cout << min_val << endl;
}