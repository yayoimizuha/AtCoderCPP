#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    size_t For = 0, Against = 0;
    string S;
    for (int i = 0; i < N; ++i) {
        cin >> S;
        if (S == "For")For++;
        if (S == "Against")Against++;
    }
    cout << ((For > Against) ? "Yes" : "No") << endl;
}