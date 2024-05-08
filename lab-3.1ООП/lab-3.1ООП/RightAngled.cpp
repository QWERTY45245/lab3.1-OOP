#include "RightAngled.h"
#include <cmath>
#include <iostream>
#include <string>

RightAngled::RightAngled() {
    area = 0.0;
}

RightAngled::RightAngled(const Triangle& tri) {
    Init(tri);
}

RightAngled::RightAngled(const RightAngled& other)
{
}



void RightAngled::Init(const Triangle& tri) {
    double a = tri.GetSide1();
    double b = tri.GetSide2();
    double c = tri.GetSide3();

    if (a * a + b * b != c * c && a * a + c * c != b * b && b * b + c * c != a * a) {
        std::cerr << "Error: The triangle is not right-angled." << std::endl;
        exit(EXIT_FAILURE);
    }

    triangle = tri;
}

void RightAngled::CalculateArea() {
    double a = triangle.GetSide1();
    double b = triangle.GetSide2();
    double c = triangle.GetSide3();

    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

double RightAngled::GetArea() const {
    return area;
}

std::string RightAngled::toString() const
{
    return std::string();
}

void RightAngled::Display() const {
    std::cout << "Area of the right-angled triangle: " << area << std::endl;
}

RightAngled::operator std::string() const {
    return "Area of the right-angled triangle: " + std::to_string(area);
}

std::ostream& operator<<(std::ostream& os, const RightAngled& side)
{
}

std::istream& operator>>(std::istream& is, RightAngled& side)
{
}
