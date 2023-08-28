#include "directives_library.hpp"

// enum class Male = {
//
// }

class Monitor{
    
    public:
    std::string name;
    Monitor(const std::string& name ) : name(name)
    {};

};

class Letter_User
{

public:
    
    Letter_User(const std::string& first_name,
                const std::string& lastName,
                int age) : first_name_(first_name),
                lastName_(lastName), age_(age)
                {};

    void set_lastName(const std::string& lastName){
        lastName_ = lastName;
    };
    Letter_User() : Letter_User("No name", "No last name", 0)
    {};
    
     std::string get_lastName(){
         return lastName_;
     };

private:
    std::string first_name_{"no name"};
    std::string lastName_;
    int age_;
};

class Ship{
    public:

    private:
    unsigned short id_;
    std::string name_;
    unsigned int speed_;
    const size_t maxCrew_;
    unsigned int capacity;
};