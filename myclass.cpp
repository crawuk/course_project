#include "myclass.h"

myclass::myclass(int value)
{
    this -> size = value;
    this -> data = new int[value];
    for (int i = 0; i < value; i++)
    {
        data[i] = i;
    }
    cout << "вызвался конструктор " << this << endl;
}
    
myclass::myclass(const myclass & other)        // конструктор копирования
{
    this -> size = other.size;
    this -> data = new int[other.size];
    for (int i = 0; i < other.size; i++)
    {
        this -> data[i] = other.data[i];
    }
    cout << "вызвался конструктор копирования " << this << endl;
}
/* говно какое-то
myclass::myclass & operator= (const myclass & other)  // перегрузка оператора =
{
    cout << "вызвался оператор = " << this << endl;
    this -> size = other.size;
    if (this -> data != nullptr)
    {
        delete[] this -> data;
    }
    for (int i = 0; i < other.size; i++)
    {
    this -> data[i] = other.data[i];
    }
    return *this;
}
*/
    
myclass::~myclass()   // <- деструктор, синтаксис деструктора ~. деструктор может быть только один. деструктор не принимает параметров
{
    delete[] data;
    cout << "вызвался деструктор  " << this << endl;
}
