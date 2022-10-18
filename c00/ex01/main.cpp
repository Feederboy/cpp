#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main()
{
    PhoneBook book;
    std::string res;
    int i = 0;
    
    std::cout << "PROMPT" << std::endl;
    std::cout << "type ADD, SEARCH or EXIT: " << std::endl;
    std::getline(std::cin, res);
    while (std::cin)
    {
        if (res.compare("ADD") == 0)
        {
            std::cout << "ADD TYPED" << std::endl;
            i++;
            book.delete_older();
            book.setcontact();
            book.print_book();
            std::cout << "type ADD, SEARCH or EXIT: " << std::endl;
        }
        else if (res.compare("SEARCH") == 0)
        {
            book.search();
            std::cout << "type ADD, SEARCH or EXIT: " << std::endl;
            
        }
        else if (res.compare("EXIT") == 0)
        {
            std::cout << "EXITING..." << std::endl;
            break ;
        }
        else
        {
            std::cout << "Invalid command. Try ADD, SEARCH or EXIT" << std::endl;
        }
        
       std::getline(std::cin, res);
    }

    return (0);


}