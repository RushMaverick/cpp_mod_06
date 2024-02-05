#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter;
#include <iostream>
#include <exception>

class ScalarConverter {
	private:
		static void convert(std::string input);
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const &other);
		ScalarConverter(ScalarConverter const &other);
	
	class NotDisplayable : public std::exception {
			const char * what() const throw() {
				return "You can not display that input.";
			}
	};
};

#endif