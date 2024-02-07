#include "ScalarConverter.hpp"

int main(void){
	// try {
	// 	ScalarConverter::convert("+inf");
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	ScalarConverter::convert("nan");
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	try {
		ScalarConverter::convert("c");
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	// try {
	// 	ScalarConverter::convert("13");
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	ScalarConverter::convert("42.23");
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
	return 0;
}