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
	else if (input.compare("-inf") == 0 || input.compare("-inff") == 0){
		floatsie = -std::numeric_limits<float>::infinity();
		dubDub = -std::numeric_limits<double>::infinity();
		i_possible = false;
		c_possible = false;
	}
	else if (input.compare("nanf") == 0 || input.compare("nan") == 0)
	{
		floatsie = std::numeric_limits<float>::quiet_NaN();
		dubDub = std::numeric_limits<double>::quiet_NaN();
		i_possible = false;
		c_possible = false;
	}
	else if (input.find('.') != std::string::npos && input.find('f') != std::string::npos){
		try {floatsie = std::stof(input);} catch (std::exception &e){
			std::cout << "Invalid input." << std::endl;
			return;
		}
		dubDub = static_cast<double>(floatsie);
		intsie = static_cast<int>(floatsie);
		charsie = static_cast<char>(floatsie);
	}
	else if (input.find('.') != std::string::npos){
		try {dubDub = std::stod(input);} catch (std::exception &e){
			std::cout << "Invalid input." << std::endl;
			return;
		}
		floatsie = static_cast<float>(dubDub);
		intsie = static_cast<int>(floatsie);
		charsie = static_cast<char>(floatsie);
	}
	else if (input.size() == 1){
		charsie = input.at(0);
		floatsie = static_cast<float>(charsie);
		dubDub = static_cast<double>(charsie);
		intsie = static_cast<int>(charsie);
	}
	else {
		try {intsie = stoi(input);} catch (std::exception &e){
			std::cout << "Invalid input." << std::endl;
			return;
		}
		floatsie = static_cast<float>(intsie);
		dubDub = static_cast<double>(intsie);
		charsie = static_cast<char>(intsie);
	}
	if (!c_possible)
		std::cout << "char: Impossible." << std::endl;
	else if (!std::isprint(charsie))
		std::cout << "char: Not displayable." << std::endl;
	else
		std::cout << "char: " << charsie << std::endl;
	if (!i_possible)
		std::cout << "int: Impossible." << std::endl;
	else
		std::cout << "int: " << intsie << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << floatsie << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << dubDub << std::endl;

}