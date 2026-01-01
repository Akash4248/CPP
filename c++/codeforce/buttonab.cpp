#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int min_moves = min(a, b);
        if (min_moves + c >= max(a, b)) {
            cout << "First" << endl;
        } else {
            if (a > b) {
                cout << "First" << endl; 
            } else {
                cout << "Second" << endl;
            }
        }
    }
 
    return 0;
}