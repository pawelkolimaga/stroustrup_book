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
                int age) 
                : first_name_(first_name)
                , lastName_(lastName)
                , age_(age)
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
    unsigned short id_;
    std::string name_;
    int speed_;
    const size_t maxCrew_;
    const unsigned capacity_;

    public:
    Ship() : Ship(1, "no_name", 0, 0, 0){}

    Ship (unsigned short id
    , const std::string& name
    , int speed
    , const size_t maxCrew
    , const unsigned capacity) : 
    id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
    {}

    // Gettery:
    unsigned short getId() const { return id_; }
    const std::string getName() const { return name_; }
    int getSpeed() const { return speed_; }
    const size_t getMaxCrew() const { return maxCrew_; }
    unsigned getCapacity() const { return capacity_; }

    //Settery:
    void setId(unsigned short id){ id_ = id; }
    void setName(std::string& name ) { name_ = name; }
    void setSpeed( int speed ){ speed_ = speed; }

    Ship& operator+= (int x){
        setId(id_ + x);
        return *this;
    }

    Ship& operator++() {
        setSpeed(speed_ + 1);
        return *this;
    }

};

std::vector<int> concatenateVectors(std::vector<int>& vec1, std::vector<int>& vec2){

  std::vector<int> tempVec;
  auto counter = vec2.begin();

  for (auto i = vec1.begin() ; i != vec1.end() ; ++i){
    tempVec.push_back(vec1[*i-1]);
    if (counter < vec2.end()){
    tempVec.push_back(vec2[*i-1]);
    counter++;
    }
  }

  return tempVec;
}