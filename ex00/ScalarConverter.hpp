#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <cctype>
class ScalarConverter;

class ScalarConverter {
	public:
		static void convert(std::string input);

	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const &other);
		ScalarConverter(ScalarConverter const &other);

		int integer;
		char character;
		double dub;
		float floatsie;
		
	
	class NotDisplayable : public std::exception {
			const char * what() const throw() {
				return "You can not display that input.";
			}
	};
};

#endif