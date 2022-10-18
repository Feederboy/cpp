#include <string>
# include <iostream>

int main()
{
    std::string hi;
    std::string *stringPTR;
    std::string &stringREF = hi; //stringREF became hi variable

    hi = "HI THIS IS BRAIN";
    stringPTR = &hi; //stringPTR is pointing to hi variable

    std::cout << "Adresse de hi  : " << &hi << std::endl;
    std::cout << "Adresse de REF : " << &stringREF << std::endl;
    std::cout << "Adresse de PTR : " << stringPTR << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "valeur de hi  : " << hi << std::endl;
    std::cout << "valeur de REF : " << stringREF << std::endl;
    std::cout << "valeur de PTR : " << *stringPTR << std::endl;

    return (0);
    
}