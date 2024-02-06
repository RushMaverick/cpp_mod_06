#include "ScalarConverter.hpp"

int main(void){
	try {
		ScalarConverter::convert("+inf");
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}