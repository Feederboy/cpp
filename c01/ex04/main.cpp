#include <string>
#include <iostream>
#include <fstream>
#include <sstream>



int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout << "Wrong number of arguments, need 3." << std::endl;
        return (0);
    }
    std::string s1(av[2]);
    std::string s2(av[3]);
    if (s1.empty() || s2.empty())
        std::cout << "Arguments must not be empty." << std::endl;
    
    std::ifstream   instream(av[1]);
    std::string     outfile = std::string(av[1]) + ".replace";
    std::ofstream   outstream(&outfile[0]);

    std::istreambuf_iterator<char>	eos;
    std::string                     file(std::istreambuf_iterator<char>(instream), eos);

    instream.close();

    //cherche les occurences et les remplace
    size_t pos;
    while ((pos = file.find(s1)) != std::string::npos) //npos signifie until the end of the string
    {
        file.erase(pos, s1.length());
        file.insert(pos, s2);
    }
    //ecrire dans le fichier d'outpout le fichier avec tout remplace
    outstream << file;

}