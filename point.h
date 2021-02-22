#ifndef point_h
#define point_h


#endif /* point_h */

#include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;
public:
    
    point();                                 // <- конструктор по умолчанию, созданный вручную, если при создании экземпляра класса не будут указаны параметры, данная реализация позволит присвоить переменным значения по умолчанию
    point(int valueX, int valueY);           // <- второй конструктор класса(перегрузка), имя конструктора такое же как и имя класса, если конструктор в классе не описан, он называется конструктором по умолчанию, конструктор должен быть в public секции
    bool operator == (const point &other);   // <- перегрузка оператора ==
    bool operator != (const point &other);   // <- перегрузка оператора !=
    point operator + (const point & other);  // <- перегрузка оператора +
    int GetX();                              // <- геттер, получить значение х, так принято делать, инкапсуляция
    void SetX(int valueX );                  // <- сеттер, установить значение х, так тоже принято делать
    void SetXWithThisKeyword(int x);
    int GetY();
    void SetY(int valueY);
    void print();
    
    point & operator ++ ()
    {
        this -> x++;
        this -> y += 1;
        return *this;
    }
    
    point & operator -- ()
    {
        this -> x--;
        this -> y -= 1;
        return *this;
    }
};
