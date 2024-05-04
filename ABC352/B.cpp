#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    cin >> S;
    cin >> T;
    int S_pos = 0, T_pos = 0;
    while (S_pos != S.size()) {
        if (S[S_pos] == T[T_pos]) {
            cout << T_pos + 1 << " ";
            S_pos++;
            T_pos++;
        } else {
            while (T[T_pos] != S[S_pos]) {
                T_pos++;
            }
        }
    }
    cout << endl;
}