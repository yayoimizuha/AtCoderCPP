#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<short, short>> TIME;
    for (int i = 0; i < 24; ++i) {
        for (int j = 0; j < 60; ++j) {
            TIME.emplace_back(i, j);
        }
    }
    vector<bool> EASY_TO_MISTAKE;
    stringstream ss_1, ss_2;
    for (auto i: TIME) {
        ss_1 << setfill('0') << right << setw(2) << i.first;
        ss_2 << setfill('0') << right << setw(2) << i.second;
        string vert1;
        vert1.push_back(ss_1.str()[0]);
        vert1.push_back(ss_2.str()[0]);
        string vert2;
        vert2.push_back(ss_1.str()[1]);
        vert2.push_back(ss_2.str()[1]);
        ss_1.str("");
        ss_2.str("");
        if ((0 <= stoi(vert1) && stoi(vert1) <= 23) && (0 <= stoi(vert2) && stoi(vert2) <= 59)) {
            //cout << i.first << ' ' << i.second << endl;
            //cout << vert1 << ' ' << vert2 << endl;
            //cout << endl;
            EASY_TO_MISTAKE.push_back(true);
        } else {

            EASY_TO_MISTAKE.push_back(false);
        }
    }
    short A, B;
    cin >> A >> B;
    for (size_t i = 0; i < TIME.size(); ++i) {
        if (TIME[i] == make_pair(A, B)) {
            for (size_t j = i; j <= EASY_TO_MISTAKE.size(); ++j) {
                if (j == EASY_TO_MISTAKE.size()) {
                    j = -1;
                    continue;
                }
                if (EASY_TO_MISTAKE[j]) {
                    cout << TIME[j].first << ' ' << TIME[j].second << endl;
                    exit(0);
                }

            }
        }
    }
}