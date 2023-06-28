#include "directives_library.hpp"

bool isCorrect (double &age){

    if((age > 120)||(age<1)){
        std::cout << "Please, provide your age again, because you are less than one year age or over 120 years\n\n";
        return true;
    }
    return false;
}

std::string Letter (std::string &str){
    return str;
}

int main(){

    int a = 'A';
    std::cout << "\n" 
        << a 
        << "\n\n";

    bool b = true;
    char c = b;
    std::cout << "\n" 
        << c 
        << "\n\n";

    std::string first_name;
    std::string second_name;
    std::string receiver_name;
    double age = 0;

    std::cout << "Provide your name and age and press enter\n\n";
    std::cin >> first_name >> second_name;

    std::string full_name = first_name + ' ' + second_name;
    
    do{
        std::cout << "OK! Now please give me your accurate age: ";
        std::cin >> age;
    }while(isCorrect(age));
    
    std::cout << "\nTo whom do you want to write? ";
    std::cin >> receiver_name;
    
    //std::cout << "\n\nHello, " << full_name << "!\n\n";
    //std::cout << "And your age is " << age*12 << " months.\n\n";
    
    //std::cout << sqrt(8) << "\n\n\n";

    std::string current;
    std::string previous = " ";
    std::size_t number_of_words = 0;

    while(current != ":q"){
        std::cin >> current;
        number_of_words++;
        if(previous==current){
            std::cout << "Repeatint words: " << current << "\n\n\n";    
        }
        previous = current;
        //if(first_name == "exit"){
        //    break;
        //}
    }
    std::cout << "\n\nNumber of words: " << number_of_words << "\n\n";

}
