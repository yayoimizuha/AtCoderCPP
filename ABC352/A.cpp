#include <iostream>

using namespace std;

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    if ((X < Z && Z < Y) or (Y < Z && Z < X)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}