#include <iostream>
#include <string>

using namespace std;


bool match(string T, string S_dash) {
    for (int i = 0; i < T.size(); ++i) {
        if (T.at(i) == '?' or S_dash.at(i) == '?')continue;
        if (T.at(i) != S_dash.at(i))return false;
    }
    return true;
}

int main() {
    string S, T;
    cin >> S;
    cin >> T;
    for (int i = 0; i <= T.size(); ++i) {
        if (match(T, S.substr(0, i) + S.substr(S.size() - (T.size() - i)))) {
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}