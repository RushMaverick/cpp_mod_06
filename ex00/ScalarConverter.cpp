#include "ScalarConverter.hpp"
class ScalarConverter;

ScalarConverter::ScalarConverter(){
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
	return *this;
}

void ScalarConverter::convert(std::string input){
	int		intsie = 0;
	float	floatsie = 0;
	double	dubDub = 0;
	char	charsie = 0;

	bool c_possible = true;
	bool i_possible = true;

	if (input.compare("+inf") == 0 || input.compare("+inff") == 0){
		floatsie = std::numeric_limits<float>::infinity();
		dubDub = std::numeric_limits<double>::infinity();
		i_possible = false;
		c_possible = false;
	}
	if (input.compare("-inf") == 0 || input.compare("-inff") == 0){
		floatsie = -std::numeric_limits<float>::infinity();
		dubDub = -std::numeric_limits<double>::infinity();
		i_possible = false;
		c_possible = false;
	}

}