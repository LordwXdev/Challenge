#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        bool hard = false;

        for (int i = 0; i < n; i++) {
            if (isVowel(s[i])) {
                count = 0;
            } else {
                count++;
            }
            if (count == 4) {
                hard = true;
                break;
            }
        }

        if (hard)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
