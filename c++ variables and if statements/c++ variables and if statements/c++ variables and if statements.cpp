#include <iostream>
using namespace std;

int main()
{
    cout << 5 + 5 << "\n\n";

    cout << 355 /113 << "\n\n";

    cout << 503 * 92 << "\n\n";

    int num1 = 0;
    while (num1 < 10) {
        num1 += 1;
        cout << num1 << "\n";
    }

    int five_factorial = 5 * 4 * 3 * 2 * 1;
    cout << "\n" << five_factorial << "\n\n";

    void six_times_table(); {
        int num1 = 1;
        int num2 = 6;

        while (num1 <= 10) {
            int num3 = num1 * num2;
            cout << num2 << " x " << num1 << " = " << num3 << "\n";
            num1 += 1;
        }
    }

    int three_e = ((919 * -1) - 6) / 2.56;
    cout <<"\n" << three_e << "\n\n";

    int mean = (15 + 25 + 30 + 20) / 4;
    cout << mean << "\n\n";

    int fraction_one = 0.50;
    int fraction_two = 0.75;
    int result_fraction = fraction_one+fraction_two;

    cout << result_fraction << "\n\n";

    // this is a comment

}

