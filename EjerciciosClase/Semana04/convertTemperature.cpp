/*
1. Write a program that converts a temperature from Celsius
to Fahrenheit. • It should (1) prompt the user for input, (2) read a double
value from the keyboard, (3) calculate the result, and (4)
format the output to one decimal place. When it’s finished,
it should work like this:
Enter a temperature in Celsius: 24
24.0 C = 75.2 F

• Formula to do the conversion:

F = C × 9 / 5 + 32

*/

#include <iostream>

int main(){

	double temperature, result;

	//result: Fahrenheit

	std::cout << "Enter a temperature in Celcius: ";
	std::cin >> temperature;

	result = temperature * 9 / 5 + 32;

	std::cout.precision(1);

	std::cout << std::fixed << temperature << " C = " << result << " F\n";
}