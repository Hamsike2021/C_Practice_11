class Cow: public Farm_Animal
{
public:
    Cow(string name,string feature,string sound,string resource): Farm_Animal(name,feature,sound, resource){
        
    };
    Cow& get_action(string object)
    {
        cout << name <<' '<< feature<< ' '<< object << endl;
    }
};
class Duck: public Farm_Animal
{
public:
    Duck(string name,string feature,string sound,string resource): Farm_Animal(name,feature,sound, resource){

    };
    Duck& get_action(string object)
    {
        cout << name<< ' '<< feature<< ' '<< object << endl;
    }
};
class Cat: public Farm_Animal
{
public:
    Cat(string name,string feature,string sound, string resource): Farm_Animal(name,feature,sound, resource){
        
    };
    Cat& get_action(string object)
    {
        cout << name << ' ' << feature<< ' ' << object << endl;
    }
};
class Sheep: public Farm_Animal
{
public:
    Sheep(string name,string feature,string sound, string resource): Farm_Animal(name,feature,sound, resource){
        
    };
    Sheep& get_action(string object)
    {
        cout << name << ' ' << feature<< ' '<< object << endl;
    }
};
