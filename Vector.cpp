#include "Vector.h"
#include <iostream>
#include <string>
#include <sstream>


int Vector::getX() const {
    return x;
}

int Vector::getY() const {
    return y;
}

int Vector::getZ() const {
    return z;
}

void Vector::setX(int newX) {
    x = newX;
}

void Vector::setY(int newY) {
    y = newY;
}

void Vector::setZ(int newZ) {
    z = newZ;
}

void Vector::Init(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vector::Read() {
    std::cout << "¬вед≥ть координати вектора (x y z): ";
    std::cin >> x >> y >> z;
    Init(x, y, z);
}

Vector Vector::add(const Vector& other) const {
    return Vector(x + other.x, y + other.y, z + other.z);
}

Vector Vector::subtract(const Vector& other) const {
    return Vector(x - other.x, y - other.y, z - other.z);
}

int Vector::dotProduct(const Vector& other) const {
    return x * other.x + y * other.y + z * other.z;
}

int Vector::length() const {
    return std::sqrt(x * x + y * y + z * z);
}

int Vector::cosineAngle(const Vector& other) const {
    int lengthProduct = length() * other.length();

    if (lengthProduct == 0) {
        return 0;
    }

    return dotProduct(other) / lengthProduct;
}

void Vector::display() const {
    std::cout << this->toString() << std::endl;
}

std::string Vector::toString() const
{
    std::stringstream ss;
    ss << "(" << x << ", " << y << ", " << z << ")";
    return ss.str();
}

