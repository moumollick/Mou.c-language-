
#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int m;
        cin >> m;
        
        if (m + 3 <= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
