#include <iostream>
#include <set>
#include <string>
using namespace std;

bool hasDistinctDigits(int year) {
    string s = to_string(year);
    set<char> digits;
    for (char c : s) {
        if (digits.count(c)) return false;
        digits.insert(c);
    }
    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
