#ifndef IClasses_h
#define IClasses_h
using namespace std;
#include <string>

class IClasses
{
public:
    
    IClasses() {}
    virtual void message_after_class_creation() = 0;
    virtual std::string get_name() = 0;
    virtual std::string get_class() = 0;
    virtual int get_dex() = 0;
    virtual int get_intellegence() = 0;
    virtual int get_defence() = 0;
    virtual int get_damage() = 0;
    
};

#endif /* IClasses_h */
