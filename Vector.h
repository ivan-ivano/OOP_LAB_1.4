#include <iostream>
#include <cmath>
#include <string>

class Vector 
{
    private:
        int x, y, z;

    public:
        Vector(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

        int getX() const;
        int getY() const;
        int getZ() const;

        void setX(int newX);
        void setY(int newY);
        void setZ(int newZ);

        void Init(int x, int y, int z);
        void Read();
        Vector add(const Vector& other) const;
        Vector subtract(const Vector& other) const;
        int dotProduct(const Vector& other) const;
        int length() const;
        int cosineAngle(const Vector& other) const;
        void display() const;
        std::string toString() const;
};


