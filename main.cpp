#include <iostream>
#include "sum_func.h"
#include "human_class.h"
#include "myclass.h"
#include "point.h"
using namespace std;

// classes

class testclass
{
private:
    int arr[5] = {1,3,5,7,9};
    int var = 8;
    friend void changeX (testclass &value); // <- дружественная функция, которая может получить доступ к private полям класса. функция может быть дружественна к нескольким классам void changeX (point &value, myclass &smth), например
public:
    
    int & operator [] (int index )  // перегрузка оператора индексирования []
    {
        return arr[index];
    }
    
};

void changeX (testclass &value)
{
    value.arr[0] = 98;
}

int main()
{
    
    Human alex;
    alex.age = 25;
    alex.surname = "alexandrov";
    alex.weight = 95;
    alex.print();
    
    Human natasha;
    natasha.weight = 45;
    natasha.age = 20;
    natasha.surname = "ivanova";
    natasha.print();
    
    
    
    point a(5, 44);
    a.print();
    a.SetX(78);
    a.print();
    cout << a.GetX() << endl;
    
    point p;
    p.print();
    
    point n;
    n.SetXWithThisKeyword(6);
    n.print();
    
    
    myclass d(1);
    myclass e(d);
    
    /*
    testclass yt;
    cout << yt[3] << endl;
    */
    
    
    return 0;
}
