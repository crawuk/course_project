#include "point.h"

point::point()
{
    x = 0;
    y = 0;
    cout << this << " constructor" << endl;
}

point::point(int valueX, int valueY)
{
    x = valueX;
    y = valueY;
    cout << this << " constructor" << endl;
}

bool point::operator == (const point &other)
{
    return this -> x == other.x and this -> y == other.y;
}

bool point::operator != (const point &other)
{
    return !(this -> x == other.x and this -> y == other.y);
}

point point::operator + (const point & other)
{
    point temp;
    temp.x = this -> x + other.x;
    temp.y = this -> y + other.y;
    return temp;
}

int point::GetX()
{
    return x;
}

void point::SetX(int valueX )
{
    x = valueX;
}

void point::SetXWithThisKeyword(int x)
{
    this -> x = x;
}

int point::GetY()
{
    return y;
}

void point::SetY(int valueY)
{
    x = valueY;
}

void point::print()
{
    cout << "x = " << x << "\ny = " << y << endl;
}
