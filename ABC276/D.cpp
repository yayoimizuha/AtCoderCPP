#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int count = 0;
    int one_flag;
    while (true) {
        one_flag = 0;
        for (int &a: A) {
            //cout << a << endl;
            if (a % 2 == 0) {
                a /= 2;
            } else if (a % 3 == 0) {
                a /= 3;
            } else if (a == 1) {
                one_flag++;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }
        if (one_flag == N)break;
        count++;
    }
    cout << count << endl;
    return 0;
}