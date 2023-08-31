#include "directives_library.hpp"
#include "letter_classes.hpp"
    
int main()
{
    int l = 0x234FF;
    unsigned j = 04566332;
    std::string ll = std::to_string(l);

    Ship Black_Pearl; 
    Black_Pearl += 5;
    Black_Pearl++;
    std::cout << Black_Pearl.getId() << std::endl;
    std::cout << Black_Pearl.getName() << std::endl;
    std::cout << Black_Pearl.getSpeed() << std::endl;
    std::cout << Black_Pearl.getMaxCrew() << std::endl;
    std::cout << Black_Pearl.getCapacity() << std::endl;

    std::vector<int> vec1 = {1,2,3,4,5};
    std::vector<int> vec2 = {20,564};

    std::vector<int> vec = concatenateVectors(vec1, vec2);
 
    for (auto it : vec){
    std::cout << it << "\n";
    }

    Cargo Bananas;
    std::cout << Bananas.getAmount() << "\n";
    Bananas += 33;
    std::cout << Bananas.getAmount() << "\n";
    Bananas -= 32;
    std::cout << Bananas.getAmount() << "\n";


}