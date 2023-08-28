// #include "directives_library.hpp"

// bool isNotCorrect (double &age){

//     if((age > 120)||(age<1)){
//         std::cout << "Please, provide your age again, because you are less than one year age or over 120 years\n\n";
//         return true;
//     }
//     return false;
// }

// void display_letter (std::string &str){
//     std::cout << str << "\n";
// }


// int main(){
    
//     std::string letter = " ";
//     std::string first_name;
//     std::string second_name;
//     std::string receiver_name;
//     double age = 0;

//     display_letter(letter);

//     std::cout << "Provide your name and age and press enter\n\n";
//     std::cin >> first_name >> second_name;

//     std::string full_name = first_name + ' ' + second_name;
    
//     do{
//         std::cout << "OK! Now please give me your accurate age: ";
//         std::cin >> age;
//     }while(isNotCorrect(age));
    
//     std::cout << "\nTo whom do you want to write? ";
//     std::cin >> receiver_name;

//     letter = "\tDear " + receiver_name + ",\n\n";
    
//     //std::cout << "\n\nHello, " << full_name << "!\n\n";
//     //std::cout << "And your age is " << age*12 << " months.\n\n";
    
//     //std::cout << sqrt(8) << "\n\n\n";

//     std::string current;
//     std::string previous = " ";
//     std::size_t number_of_words = 0;

//     while(current != ":q"){
//         std::cin >> current;
//         number_of_words++;
//         if(previous==current){
//             std::cout << "Repeatint words: " << current << "\n\n\n";    
//         }
//         previous = current;
//         //if(first_name == "exit"){
//         //    break;
//         //}
//     }
//     std::cout << "\n\nNumber of words: " << number_of_words << "\n\n";

// }
