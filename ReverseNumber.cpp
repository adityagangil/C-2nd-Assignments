#include <iostream>
using namespace std;

int main() {
    int num, rev_num = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        rev_num = rev_num * 10 + digit;
        num /= 10;
    }

    cout << "The reversed number is: " << rev_num << endl;

    return 0;
}
