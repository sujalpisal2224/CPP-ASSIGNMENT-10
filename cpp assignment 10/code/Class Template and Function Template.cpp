#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T subtract()
    {
        return a - b;
    }

    T divide()
    {
        return a / b;
    }
};

template <class T>
T findMinimum(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{
    Calculator<int> c1(20, 5);

    cout << "Integer Calculator:" << endl;
    cout << "Subtraction = " << c1.subtract() << endl;
    cout << "Division = " << c1.divide() << endl;

    Calculator<double> c2(7.5, 2.5);

    cout << fixed << setprecision(2);
    cout << "\nDouble Calculator:" << endl;
    cout << "Subtraction = " << c2.subtract() << endl;
    cout << "Division = " << c2.divide() << endl;

    cout << "\nMinimum Value = "
         << findMinimum(10, 25) << endl;

    return 0;
}
