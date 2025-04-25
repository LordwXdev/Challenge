#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int d_dsa, d_toc, d_dm;
        int s_dsa, s_toc, s_dm;

        // Read Dragon's scores
        cin >> d_dsa >> d_toc >> d_dm;

        // Read Sloth's scores
        cin >> s_dsa >> s_toc >> s_dm;

        int total_d = d_dsa + d_toc + d_dm;
        int total_s = s_dsa + s_toc + s_dm;

        if (total_d > total_s) {
            cout << "Dragon" << endl;
        } else if (total_s > total_d) {
            cout << "Sloth" << endl;
        } else {
            if (d_dsa > s_dsa) {
                cout << "Dragon" << endl;
            } else if (s_dsa > d_dsa) {
                cout << "Sloth" << endl;
            } else {
                if (d_toc > s_toc) {
                    cout << "Dragon" << endl;
                } else if (s_toc > d_toc) {
                    cout << "Sloth" << endl;
                } else {
                    cout << "Tie" << endl;
                }
            }
        }
    }

    return 0;
}