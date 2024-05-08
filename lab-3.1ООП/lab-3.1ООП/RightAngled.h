#pragma once
#include "Triangle.h"

class RightAngled :public Triangle {
private:
    Triangle triangle;
    double area;

public:
    RightAngled();
    RightAngled(const Triangle& tri);
    RightAngled(const RightAngled& other);
    void Init(const Triangle& tri);
    void CalculateArea();
    void Display() const;
    double GetArea() const;
    std::string toString() const;
    operator std::string() const;
    friend std::ostream& operator<<(std::ostream& os, const RightAngled& side);
    friend std::istream& operator>>(std::istream& is, RightAngled& side);
};