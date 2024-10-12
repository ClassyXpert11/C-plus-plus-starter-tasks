#include <iostream>
using namespace std;

int main()
{
    // using c++ as a artithmati calculator
    cout << "1)\n";
    cout << 5 + 5 << "\n\n";

    cout << "2)\n";
    cout << 355 /113 << "\n\n";

    cout << "3a)\n";
    cout << 503 * 92 << "\n\n";

    cout << "3b)\n";
    int num1 = 0;
    while (num1 < 10) {
        num1 += 1;
        cout << num1 << "\n";
    }

    cout << "\n3c)\n";
    int five_factorial = 5 * 4 * 3 * 2 * 1;
    cout << five_factorial << "\n\n";

    cout << "3d)\n";
    void six_times_table(); {
        int num1 = 1;
        int num2 = 6;

        while (num1 <= 10) {
            int num3 = num1 * num2;
            cout << num2 << " x " << num1 << " = " << num3 << "\n";
            num1 += 1;
        }
    }

    cout << "\n3e)\n";
    int three_e = ((919 * -1) - 6) / 2.56;
    cout << three_e << "\n\n";

    cout << "3f)\n";
    int mean = (15 + 25 + 30 + 20) / 4;
    cout << mean << "\n\n";

    cout << "3g)\n";
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    int numerator = a + c;
    int denominator = b + d;

    cout << numerator << "/" << denominator << endl;
    

    

}

