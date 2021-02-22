#ifndef myclass_h
#define myclass_h


#endif /* myclass_h */

#include <iostream>
using namespace std;

class myclass
{
private:
    
    int* data;
    int size;
    
public:
    
    myclass(int value);
    myclass(const myclass & other);               // конструктор копирования
    myclass &operator = (const myclass & other);  // перегрузка оператора =
    ~myclass();                                   // <- деструктор, синтаксис деструктора ~. деструктор может быть только один. деструктор не принимает параметров
};
