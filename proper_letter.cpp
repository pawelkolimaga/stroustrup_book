#include "directives_library.hpp"
#include "letter_classes.hpp"
    
int main()
{
    std::cout << "hello\n\n";

    Letter_User Pawel("Pawel","Koli",3);
    Letter_User Kuba;
    std::cout << Pawel.get_lastName() << "\n\n";
    Kuba.set_lastName("Kuba");
    Pawel.set_lastName("Podpora");
    std::cout << Kuba.get_lastName() << "\n\n";

    Monitor monitor_apple("jan");
    
}