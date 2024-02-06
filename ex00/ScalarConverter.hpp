#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <cctype>
#include <string>
class ScalarConverter;

class ScalarConverter {
	public:
		static void convert(std::string input);

	private:
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