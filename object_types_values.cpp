#include "directives_library.hpp"

bool isCorrect (double &age){

    if((age > 120)||(age<1)){
        std::cout << "Please, provide your age again, because you are less than one year age or over 120 years\n\n";
        return true;
    }
    return false;
}

int main(){

    std::cout << "Provide your name and age and press enter\n\n";
    double age = 0;
    std::string first_name;
    std::string second_name;
    std::cin >> first_name >> second_name;
    std::string full_name = first_name + ' ' + second_name;

    do{
    std::cout << "OK! Now please give me your accurate age: ";
    std::cin >> age;

    }while(isCorrect(age));
    
    std::cout << "\n\nHello, " << full_name << "!\n\n";
    std::cout << "And your age is " << age*12 << " months.\n\n";
    
    std::cout << sqrt(8) << "\n\n\n";

}