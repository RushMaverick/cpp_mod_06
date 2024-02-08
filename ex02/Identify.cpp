#include <Identify.hpp>
class Base;
class A;
class B;
class C;

Base::Base(){

}

Base::~Base(){

}

Base::Base(const Base &other){
	*this = other;
}

Base &Base::operator=(const Base &other){
	(void)other;
	return *this;
}

Base *generate(void) {
	std::srand(std::time(0));
	int random = std::rand() % 3;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try{(void)dynamic_cast<A&>(p); std::cout << "A" << std::endl;} catch (std::exception &e){}
	try{(void)dynamic_cast<B&>(p); std::cout << "B" << std::endl;} catch (std::exception &e){}
	try{(void)dynamic_cast<C&>(p); std::cout << "C" << std::endl;} catch (std::exception &e){}
}