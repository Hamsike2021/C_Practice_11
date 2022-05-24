#include <iostream>
using namespace std;
class Animal
{
public:
    string name;
    string feature;
    string sound;
    Animal(string name, string feature = "", string sound = "")
    {
        this->name=name;
        this->feature=feature;
        this->sound=sound;
    };
    Animal& get_sound (string sound)
    {
        sound;
    }
    Animal& get_action(string feature)
    {
        feature;
    }
    
};
