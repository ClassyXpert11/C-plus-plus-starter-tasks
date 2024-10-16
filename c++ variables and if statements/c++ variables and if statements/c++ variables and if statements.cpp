#include <iostream>
using namespace std;
#include <string>

void part1() {
    // using c++ as a artithmatic calculator
    cout << "1)\n";
    cout << 5 + 5 << "\n\n";

    cout << "2)\n";
    cout << 355 / 113 << "\n\n";

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

    cout << numerator << "/" << denominator << "\n\n";

    cout << "3h)\n";
    int power_of_2 = 73 * 73;

    cout << "73^2 = " << power_of_2 << "\n\n";

    cout << "3i)\n";
    int power_of_4 = 73 * 73 * 73 * 73;

    cout << "73^4 = " << power_of_4 << "\n\n";

    cout << "3j)\n";
    int interpolation_a = 10;
    int interpolation_b = 20;
    double interpolation_t = 0.35;

    double interpolation = interpolation_a + (interpolation_b - interpolation_a) * interpolation_t;

    cout << "p = " << interpolation << "\n\n";

    cout << "3k)\n";
    double percentage43 = 18 * 0.43;

    cout << "43% of 18 = " << percentage43 << "\n\n";

    cout << "3l)\n";
    double degrees = 65.0;
    double radians = degrees * (3.142 / 180.0);

    cout << "65 degrees = { " << radians << " } radians" << "\n\n";
}

void part2() {
    float playerSpeed = 5.0f;
    bool isPlayerDead = false;
    int weaponIndex = 3;

    cout << "1) & 2)\n";
    playerSpeed = 2.1f;
    cout << playerSpeed << "\n\n";

    cout << "3)\n";
    playerSpeed += 10;
    cout << playerSpeed<<"\n\n";

    cout << "4)\n";
    double playerScore = 0;
    int counter = 0;

    while (counter < 3) {
        playerScore += 10;
        counter += 1;
    }
    cout << "Player score : "<< playerScore << "\n\n";

    cout << "5)\n";
    float rectangleWidth = 4.2;
    float rectangleHeight = 10.6;
    float area = rectangleWidth* rectangleHeight;

    cout << "width = " << rectangleWidth << "\n";
    cout << "height = " << rectangleHeight << "\n";
    cout << "area = " << area << "\n";












}

void part3() {

    cout << "1)\n";
    int age = 0;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old!\n\n";
    
    cout << "2)\n";
    int playerLevel;
    cout << "Please enter your player level: ";
    cin >> playerLevel;
    cout << "You are level" << playerLevel << "!\n\n";

    cout << "3 & 4)\n";
    string playerName;
    cout << "Please enter your name: ";
    cin >> playerName;
    cout << "You're name is " << playerName << "! Nice to meet you!\n\n";


    cout << "5)\n";
    double rectangleW;
    double rectangleH;

    cout << "Please enter a rectangle width: ";
    cin >> rectangleW;
    cout << "Please enter a rectangle height: ";
    cin >> rectangleH;
    double rectangleA = rectangleW*rectangleH;
    cout << "\nThe area of your shape is: " << rectangleA <<"\n\n";


    cout << "6)\n";
    double squaredNum;
    cout << "Please enter a number to square: ";
    cin >> squaredNum;
    squaredNum = squaredNum * squaredNum;
    cout << "Your squared number is: " << squaredNum << "\n\n";


    cout << "7)\n";
    double num1;
    double num2;
    double num3;
    int option;

    cout << "Please enter a number: ";
    cin >> num1;
    cout << "Please enter another number: ";
    cin >> num2;
    cout << "\n1 = Addition\n2 = Subtraction\n3 = Multiplycation\n4 = Division\nPlease select an option: ";
    cin >> option;

    if (option == 1){
        num3 = num1 + num2;
        cout << "Your answer is " << num3 << "\n\n";
    }               
    else if (option == 2) {
        num3 = num1 - num2;
        cout << "Your answer is " << num3 << "\n\n";
    }               
    else if (option == 3) {
        num3 = num1 * num2;
        cout << "Your answer is " << num3 << "\n\n";
    }
    else if (option == 4) {
        num3 = num1 / num2;
        cout << "Your answer is " << num3 << "\n\n";
    }
    else {
        cout << "Please enter a valid number!";
    }


    cout << "8)\n";
    double celcius;
    cout << "Please enter your celcius: ";
    cin >> celcius;
    double farenheight = (celcius * 9 / 5) + 32;
    cout << "Your Farenheight conversion is: " << farenheight << "\n\n";

}

void part4() {





}

int main()
{
    //part1();
    //part2();
    //part3();
    part4();

}

