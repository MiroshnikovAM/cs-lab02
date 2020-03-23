#include <iostream>

using namespace std;

double min(double a, double b);

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "min(A, B) = " << min(a, b) << '\n'
    return 0;
}

double min(double a, double b)
{
    if (a < b)
        return a;
    else
        return b;
}