#include <iostream>
using namespace std;

void flip(int* N) {
    if (N == nullptr) return;
    int input = *N;
    int reversed = 0;
    while (input > 0) {
        reversed = reversed * 10 + (input % 10);
        input = input / 10;
    }
    *N = reversed;
}

void flip(int& N) {
    int input = N;
    int reversed = 0;
    while (input > 0) {
        reversed = reversed * 10 + (input % 10);
        input = input / 10;
    }
    N = reversed;
}

int flip(int N) {
    int reversed = 0;
    while (N > 0) {
        reversed = reversed * 10 + (N % 10);
        N = N / 10;
    }
    return reversed;
}

int main() {
    int n1 = 567321;
    flip(&n1);
    cout << "Variant 1: " << n1 << endl;

    int n2 = 567321;
    void (*flipRef)(int&) = flip; 
    flipRef(n2);
    cout << "Variant 2: " << n2 << endl;

    int n3 = 567321;
    int res3 = flip(n3 + 0);
    cout << "Variant 3: " << res3 << endl;

    return 0;
}
