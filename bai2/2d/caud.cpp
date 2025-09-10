#include <iostream>
#include <cmath>
using namespace std;

int f3(int x) {
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
}

int main() {
    int so;
    while (cin >> so) {
        try {
            cout << f3(so) << endl;
        } catch (...) {
            cerr << "Math error with input: " << so << endl;
        }
    }
    return 0;
}
