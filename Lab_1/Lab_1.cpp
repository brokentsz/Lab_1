#include <iostream>
#include "Log_con.h"

using namespace std;

int main() {
    cout << "| a | b | c | f2 |" << endl;
    for (int a = 1; a >= 0; a--) {
        for (int b = 1; b >= 0; b--) {
            for (int c = 1; c >= 0; c--) {
                int f2 = EQU(IMP(a, AND(b, c)), AND(IMP(a, b), IMP(a, b)));
                cout << "| " << a << " | " << b << " | " << c << " | " << f2 << " |" << endl;
            }
        }
    }
    cout << endl;
    cout << "| a | b | c | (b^c) | (a->b)|(a->b) | a->(b^c)| (a->b)^(a->b) | a->(b^c)~(a->b)^(a->b)| f2|" << endl;
    for (int a = 1; a >= 0; a--) {
        for (int b = 1; b >= 0; b--) {
            for (int c = 1; c >= 0; c--) {
                int imp1 = IMP(a, AND(b, c));
                int imp2 = AND(IMP(a, b), IMP(a, b));
                int f2 = EQU(imp1, imp2);
                cout << "| " << a << " | " << b << " | " << c << " |   " << AND(b, c) << "   |   " << IMP(a, b) << "   |   " << IMP(a, c) << "   |    " << IMP(a, AND(b, c)) << "    |       " << AND(IMP(a, b), IMP(a, b)) << "       |           " << EQU(imp1, imp2) << "           | " << f2 << " |" << endl;
            }
        }
    }
}

