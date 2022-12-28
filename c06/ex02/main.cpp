#include "Base.hpp"

class A: public virtual Base{};
class B: public virtual Base{};
class C: public virtual Base{};

Base * generate()
{
    Base *res;
    srand(time(NULL));
    int i = 0;

    switch(i = rand() % 3)
    {
        case 0 :
			std::cout << "generate A" << std::endl;
			return new A();
		case 1 :
			std::cout << "generate B" << std::endl;
			return new B();
		case 2 :
			std::cout << "generate C" << std::endl;
			return new C();
		default :
			res = NULL;	
	}
	return res;
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "p" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "C" << std::endl;
        }
    }
}

int main()
{
    Base	*p;
	
	p = generate();
	std::cout << "by ptr : ";
	identify(p);
	std::cout << std::endl;
	std::cout << "by ref : ";
	identify(*p);
	delete p;
}
