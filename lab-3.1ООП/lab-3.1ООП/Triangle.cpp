#include "Triangle.h"
#include <cmath>
#include <Windows.h>
#include <string>
#include <sstream>

using namespace std;
Triangle::Triangle() {
    side1 = side2 = side3 = 0.0;
}

Triangle::Triangle(double s1, double s2, double s3) {
    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        std::cerr << "Error: Invalid triangle sides. Sides must be positive and satisfy the triangle inequality." << std::endl;
        exit(EXIT_FAILURE);
    }
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

Triangle::Triangle(const Triangle& other) {
    side1 = other.side1;
    side2 = other.side2;
    side3 = other.side3;
}

void Triangle::Init(double s1, double s2, double s3) {
    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        std::cerr << "Error: Invalid triangle sides. Sides must be positive and satisfy the triangle inequality." << std::endl;
        exit(EXIT_FAILURE);
    }
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

void Triangle::Read() {
    double s1, s2, s3;
    std::cout << "Enter the lengths of the triangle sides: ";
    std::cin >> s1 >> s2 >> s3;
    if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        std::cerr << "Error: Invalid triangle sides. Sides must be positive and satisfy the triangle inequality." << std::endl;
        exit(EXIT_FAILURE);
    }
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

void Triangle::Display() const {
    std::cout << toString() << std::endl;
}

double Triangle::GetSide1() const {
    return side1;
}

double Triangle::GetSide2() const {
    return side2;
}

double Triangle::GetSide3() const {
    return side3;
}

void Triangle::SetSide1(double s) {
    if (s <= 0) {
        std::cerr << "Error: Side length must be positive." << std::endl;
        exit(EXIT_FAILURE);
    }
    side1 = s;
}

void Triangle::SetSide2(double s) {
    if (s <= 0) {
        std::cerr << "Error: Side length must be positive." << std::endl;
        exit(EXIT_FAILURE);
    }
    side2 = s;
}

void Triangle::SetSide3(double s) {
    if (s <= 0) {
        std::cerr << "Error: Side length must be positive." << std::endl;
        exit(EXIT_FAILURE);
    }
    side3 = s;
}

double Triangle::Perimeter() const {
    return side1 + side2 + side3;
}

double Triangle::AngleA() const {
    return acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
}

double Triangle::AngleB() const {
    return acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
}

double Triangle::AngleC() const {
    return acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
}

std::string Triangle::toString() const {
    std::ostringstream oss;
    oss << "Triangle with sides " << side1 << ", " << side2 << ", " << side3;
    return oss.str();
}

Triangle::operator std::string() const {
    return toString();
}

std::ostream& operator<<(std::ostream& os, const Triangle& side)
{
}

std::istream& operator>>(std::istream& is, Triangle& side)
{
}
