#include "ScalarConverter.hpp"
class ScalarConverter;

ScalarConverter::ScalarConverter(){
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
}

void ScalarConverter::convert(std::string input){
	int		intsie = 0;
	float	floatsie = 0;
	double	dubDub = 0;
	char	charsie = 0;
	//Check if string is pseudo literal float, like -inff, +inff or nanf
	//Check if string is pseudo literal double, like -inf, +inf or nan
	//

}