#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat	*o;
    Bureaucrat	*p;

	try
	{
		o = new Bureaucrat("Bob", 1);
		p = new Bureaucrat("Jon", 150);
		std::cout << "create : " << *o << std::endl;	
		o->decrement();
		std::cout << "dowgrade : " << *o << std::endl;	
		o->increment();
		std::cout << "upgrade : " << *o << std::endl;
        // o->increment();
		// std::cout << "upgrade : " << *o << std::endl;
        
        std::cout << "create : " << *p << std::endl;	
		p->increment();
		std::cout << "uprade : " << *p << std::endl;	
		p->decrement();
		std::cout << "downgrade : " << *p << std::endl;	
		// p->decrement();
		// std::cout << "downgrade : " << *p << std::endl;	
	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
	delete o;
	delete p;
}