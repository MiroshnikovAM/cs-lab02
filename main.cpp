#include <iostream>

using namespace std;


int max(int a, int b);
int min(int a, int b);

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "min(A, B) = " << min(a, b) << '\n'
         << "max(A, B) = " << max(a, b) << '\n';
    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
