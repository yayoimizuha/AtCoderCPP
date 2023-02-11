#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto &c: s) {
        if (c == '0') {
            cout << '1';
        }
        if (c == '1') {
            cout << '0';
        }
    }
    cout << endl;
    return 0;
}