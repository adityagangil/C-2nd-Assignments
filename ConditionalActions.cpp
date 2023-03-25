#include <iostream>
using namespace std;

int main() {
    int M;
    cout << "Enter an integer: ";
    cin >> M;

    if (M % 3 == 0 && M % 5 == 0) {
        cout << "Good Number" << endl;
    } else if (M % 3 == 0) {
        cout << "Bad Number" << endl;
    } else if (M % 5 == 0) {
        cout << "Poor Number" << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
