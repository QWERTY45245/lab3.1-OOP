#pragma once
#include <iostream>

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle();
    Triangle(double s1, double s2, double s3);
    Triangle(const Triangle& other);
    void Init(double s1, double s2, double s3);
    void Read();
    void Display() const;
    double GetSide1() const;
    double GetSide2() const;
    double GetSide3() const;
    void SetSide1(double s);
    void SetSide2(double s);
    void SetSide3(double s);
    double Perimeter() const;
    double AngleA() const;
    double AngleB() const;
    double AngleC() const;
    std::string toString() const;
    operator std::string() const;
    friend std::ostream& operator<<(std::ostream& os, const Triangle& side);
    friend std::istream& operator>>(std::istream& is, Triangle& side);
};