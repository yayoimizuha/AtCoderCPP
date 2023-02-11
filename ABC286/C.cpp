#include <bits/stdc++.h>

using namespace std;

size_t count_match(string *S) {
    auto rev = *S;
    reverse(rev.begin(), rev.end());
    size_t a = 0;
    for (auto i = 0ul; i < ceil(S->size() / 2); ++i) {
        if (S->at(i) != rev.at(i)) {
            a++;
        }
    }
    return a;
}

int main() {
    size_t N, A, B;
    cin >> N >> A >> B;
    string S;
    vector<size_t> A_i(N);
    cin >> S;
    for (auto i = 0; i < N; ++i) {
        A_i[i] = i * A + B * count_match(&S);
        rotate(S.begin(), S.begin() + 1, S.end());
    }
    cout << *min_element(A_i.begin(), A_i.end()) << endl;
}