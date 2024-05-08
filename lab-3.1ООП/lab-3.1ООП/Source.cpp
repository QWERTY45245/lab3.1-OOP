#include "Triangle.h"
#include "RightAngled.h"
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Triangle t;
    t.Read();
    t.Display();

    if ((t.GetSide1() * t.GetSide1() + t.GetSide2() * t.GetSide2()) == t.GetSide3() * t.GetSide3() ||
        (t.GetSide1() * t.GetSide1() + t.GetSide3() * t.GetSide3()) == t.GetSide2() * t.GetSide2() ||

        (t.GetSide2() * t.GetSide2() + t.GetSide3() * t.GetSide3()) == t.GetSide1() * t.GetSide1()) {
        RightAngled r;
        r.Init(t);
        r.CalculateArea();
        r.Display();
    }
    else {
        cout << "Периметр трикутника: " << t.Perimeter() << endl;
        cout << "Кут A: " << t.AngleA() << endl;
        cout << "Кут B: " << t.AngleB() << endl;
        cout << "Кут C: " << t.AngleC() << endl;
    }

    return 0;
}